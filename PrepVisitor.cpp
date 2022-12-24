#include "PrepVisitor.hpp"
#include "macroHelpers.hpp"
#include "utils.hpp"
#include <boost/algorithm/string/replace.hpp>

using fmt::print;
using std::any;
using std::ifstream;
using std::ofstream;
using std::pair;
using std::runtime_error;

any PrepVisitor::visitBlock(prepParser::BlockContext *context) { return any(); }

any PrepVisitor::visitParameterPackWithEllipses(
    prepParser::ParameterPackWithEllipsesContext *context) {
  return any();
}

any PrepVisitor::visitParameterPack(prepParser::ParameterPackContext *context) {
  return any();
}

any PrepVisitor::visitParameterSingle(
    prepParser::ParameterSingleContext *context) {
  return any();
}

any PrepVisitor::visitString(prepParser::StringContext *context) {
  string str{std::move(context->getText())};
  string changedStr;
  changedStr.reserve(str.size());
  bool wasEscape{false};
#define account(ch)                                                            \
  case ch:                                                                     \
    changedStr.push_back(ch);                                                  \
    break
#define accountC(C, ch)                                                        \
  case C:                                                                      \
    changedStr.push_back(ch);                                                  \
    break
  for (size_t i{1}; i < str.size() - 1; ++i) {
    if (wasEscape) {
      switch (str[i]) {
        account('\'');
        accountC('"', '\"');
        account('\?');
        account('\\');
        accountC('a', '\a');
        accountC('b', '\b');
        accountC('f', '\f');
        accountC('n', '\n');
        accountC('r', '\r');
        accountC('t', '\t');
        accountC('v', '\v');
      }
      wasEscape = false;
    } else {
      if (str[i] == '\\')
        wasEscape = true;
      else
        changedStr.push_back(str[i]);
    }
  }
  boost::replace_all(changedStr, "\n", "\\\n");
  return changedStr;
}

any PrepVisitor::visitRecurse(prepParser::RecurseContext *context) {
  return context->parameterPackWithEllipses();
}

any PrepVisitor::visitSeparator(prepParser::SeparatorContext *context) {
  auto i{std::move(visit(context->string()))};
  string *contents{any_cast<string>(&i)};
  assert(contents && "Contents is null");
  return pair<FuncKeywordTypes, string>(FuncKeywordTypes::SEPARATOR,
                                        std::move(*contents));
}

any PrepVisitor::visitHeader(prepParser::HeaderContext *context) {
  auto i{std::move(visit(context->string()))};
  string *contents{any_cast<string>(&i)};
  assert(contents && "Contents is null");
  return pair<FuncKeywordTypes, string>(FuncKeywordTypes::HEADER,
                                        std::move(*contents));
}

any PrepVisitor::visitFooter(prepParser::FooterContext *context) {
  auto i{std::move(visit(context->string()))};
  string *contents{any_cast<string>(&i)};
  assert(contents && "Contents is null");
  return pair<FuncKeywordTypes, string>(FuncKeywordTypes::FOOTER,
                                        std::move(*contents));
}

any PrepVisitor::visitBody(prepParser::BodyContext *context) {
  auto i{std::move(visit(context->string()))};
  string *contents{any_cast<string>(&i)};
  assert(contents && "Contents is null");
  return pair<FuncKeywordTypes, string>(FuncKeywordTypes::BODY,
                                        std::move(*contents));
}

any PrepVisitor::visitFuncKeyword(prepParser::FuncKeywordContext *context) {
  assert(context->children.size() == 1);
  return visit(context->children.front());
}
any PrepVisitor::visitFuncKeywordNoRecurse(
    prepParser::FuncKeywordNoRecurseContext *context) {
  assert(context->children.size() == 1);
  return visit(context->children.front());
}

any PrepVisitor::visitFuncDef(prepParser::FuncDefContext *context) {
  auto paramsEllipses{context->parameterPackWithEllipses()->Ellipses()};
  array<string, ftypes::NONE> keywordArguments{};
  prepParser::ParameterPackWithEllipsesContext *recurseParams{nullptr};
  for (auto i : context->block()->blockItem()) {
    any retAny{std::move(visit(i))};
    if (pair<ftypes, std::basic_string<char>> *ret =
            any_cast<pair<ftypes, string>>(&retAny))
      keywordArguments[ret->first] += ret->second;
    else if (prepParser::ParameterPackWithEllipsesContext **ret =
                 any_cast<prepParser::ParameterPackWithEllipsesContext *>(
                     &retAny)) {
      if (recurseParams)
        throw runtime_error("@recurse cannot be called more than once");
      if (!paramsEllipses)
        throw runtime_error(
            "@recurse cannot be called in a function without ellipses");
      recurseParams = *ret;
    }
  }
  defFuncGen(context->Identifier()->getText(),
             context->parameterPackWithEllipses(), recurseParams,
             keywordArguments);
  return any();
}

any PrepVisitor::visitDeclDef(prepParser::DeclDefContext *context) {
  array<string, ftypes::NONE> keywordArguments{};
  for (auto i : context->blockNoRecurse()->blockItemNoRecurse()) {
    any retAny{std::move(visit(i))};
    if (pair<ftypes, string> *ret = any_cast<pair<ftypes, string>>(&retAny))
      keywordArguments[ret->first] += ret->second;
    else
      assert(0 &&
             "This recurse call (or something else) should not be possible");
  }
  defDeclGen(context->Identifier()->getText(), keywordArguments);
  return any();
}

any PrepVisitor::visitProg(prepParser::ProgContext *context) {
  for (auto i : context->children)
    visit(i);
  return any();
}

PrepVisitor::PrepVisitor(ostream &os) : ss(os) {}

void PrepVisitor::defFuncGen(
    string name, prepParser::ParameterPackWithEllipsesContext *params,
    prepParser::ParameterPackWithEllipsesContext *recurse,
    array<string, ftypes::NONE> &keywordArguments) {
  std::vector<antlr4::tree::TerminalNode *> parameterIdentifiers =
      std::move(params->Identifier());
  std::vector<string> parameterArguments{};
  parameterArguments.reserve(parameterIdentifiers.size());
  std::transform(
      parameterIdentifiers.begin(), parameterIdentifiers.end(),
      std::back_inserter(parameterArguments),
      [](antlr4::tree::TerminalNode *node) { return node->getText(); });
  if (recurse) {
    if (params->Ellipses()) {
      std::vector<antlr4::tree::TerminalNode *> recurseIdentifiers =
          std::move(recurse->Identifier());
      const char *separatorArgsEllips{parameterArguments.size() ? ", " : ""};
      std::vector<string> recurseArguments{};
      recurseArguments.reserve(recurseIdentifiers.size() +
                               static_cast<bool>(recurse->Ellipses()));
      std::transform(
          recurseIdentifiers.begin(), recurseIdentifiers.end(),
          std::back_inserter(recurseArguments),
          [](antlr4::tree::TerminalNode *node) { return node->getText(); });
      if (recurse->Ellipses())
        recurseArguments.push_back("__VA_ARGS__");
      print(ss,
            "#define " fe_a
            "({1}{4}...) {2} __VA_OPT__(" expd() "(" fe_b
                                                 "({1}{4}__VA_ARGS__))) {3}\n",
            name, fmt::join(parameterArguments, ", "),
            keywordArguments[ftypes::HEADER], keywordArguments[ftypes::FOOTER],
            separatorArgsEllips);
      print(ss,
            "#define " fe_b "({1}{5}...) {2} __VA_OPT__({4}" fe_c " " par
            " ({3}))\n",
            name, fmt::join(parameterArguments, ", "),
            keywordArguments[ftypes::BODY], fmt::join(recurseArguments, ", "),
            keywordArguments[ftypes::SEPARATOR], separatorArgsEllips);
      print(ss, "#define " fe_c "() " fe_b "\n", name);
      print(ss, "#define " fe "({1}{2}...) " fe_a "({1}, __VA_ARGS__)\n", name,
            fmt::join(parameterArguments, ", "), separatorArgsEllips);
      print(ss, "#define {0}({1}{2}...) " fe "({1}, __VA_ARGS__)\n", name,
            fmt::join(parameterArguments, ", "), separatorArgsEllips);
    } else {
      throw runtime_error("Cannot recursively call function with no ellipses");
    }
  } else {
    print(ss, "#define " fe "({1}) {2} {3} {4}\n", name,
          fmt::join(parameterArguments, ", "), keywordArguments[ftypes::HEADER],
          keywordArguments[ftypes::BODY], keywordArguments[ftypes::FOOTER]);
    print(ss, "#define {0}({1}) " fe "({1})\n", name,
          fmt::join(parameterArguments, ", "));
  }
}
void PrepVisitor::defDeclGen(string name,
                             array<string, ftypes::NONE> &keywordArguments) {
  print(ss, "#define " fe " {1} {2} {3}\n", name,
        keywordArguments[ftypes::HEADER], keywordArguments[ftypes::BODY],
        keywordArguments[ftypes::FOOTER]);
  print(ss, "#define {0} " fe "\n", name);
}
any PrepVisitor::visitBodyStringImplicit(
    prepParser::BodyStringImplicitContext *context) {
  auto i{std::move(visit(context->string()))};
  string *contents{any_cast<string>(&i)};
  assert(contents && "Contents is null");
  return pair<FuncKeywordTypes, string>(FuncKeywordTypes::BODY,
                                        std::move(*contents));
}
any PrepVisitor::visitBlockNoRecurse(
    prepParser::BlockNoRecurseContext *context) {
  return any();
}
any PrepVisitor::visitBlockItem(prepParser::BlockItemContext *context) {
  if (context->funcKeyword())
    return visit(context->funcKeyword());
  return visit(context->bodyStringImplicit());
}
any PrepVisitor::visitBlockItemNoRecurse(
    prepParser::BlockItemNoRecurseContext *context) {
  if (context->funcKeywordNoRecurse())
    return visit(context->funcKeywordNoRecurse());
  return visit(context->bodyStringImplicit());
}

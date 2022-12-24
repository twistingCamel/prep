#ifndef PREP_PREPVISITOR_HPP
#define PREP_PREPVISITOR_HPP

#include "ant/prepParser.h"
#include "ant/prepVisitor.h"
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <fmt/std.h>
#include <ranges>
#include <string_view>

using ant::prepParser;
using ant::prepVisitor;
using std::any;
using std::array;
using std::ostream;
using std::string;
using std::string_view;
using std::stringstream;

class PrepVisitor : public prepVisitor {
private:
  enum FuncKeywordTypes { SEPARATOR, HEADER, FOOTER, BODY, NONE, RECURSE };
  using ftypes = FuncKeywordTypes;
  ostream &ss;

public:
  PrepVisitor(const PrepVisitor &) = default;
  PrepVisitor(PrepVisitor &&) = default;
  PrepVisitor &operator=(const PrepVisitor &) = delete;
  PrepVisitor &operator=(PrepVisitor &&) = delete;
  explicit PrepVisitor(ostream &ss);
  any visitBlock(prepParser::BlockContext *context) override;
  any visitBlockNoRecurse(prepParser::BlockNoRecurseContext *context) override;
  any visitParameterPackWithEllipses(
      prepParser::ParameterPackWithEllipsesContext *context) override;
  any visitParameterPack(prepParser::ParameterPackContext *context) override;
  any visitParameterSingle(
      prepParser::ParameterSingleContext *context) override;
  any visitString(prepParser::StringContext *context) override;
  any visitRecurse(prepParser::RecurseContext *context) override;
  any visitSeparator(prepParser::SeparatorContext *context) override;
  any visitHeader(prepParser::HeaderContext *context) override;
  any visitFooter(prepParser::FooterContext *context) override;
  any visitBody(prepParser::BodyContext *context) override;
  any visitFuncKeyword(prepParser::FuncKeywordContext *context) override;
  any visitFuncKeywordNoRecurse(
      prepParser::FuncKeywordNoRecurseContext *context) override;
  any visitFuncDef(prepParser::FuncDefContext *context) override;
  any visitDeclDef(prepParser::DeclDefContext *context) override;
  any visitProg(prepParser::ProgContext *context) override;
  any visitBodyStringImplicit(
      prepParser::BodyStringImplicitContext *context) override;

  any visitBlockItem(prepParser::BlockItemContext *context) override;
  any visitBlockItemNoRecurse(
      prepParser::BlockItemNoRecurseContext *context) override;
  void defFuncGen(string name,
                  prepParser::ParameterPackWithEllipsesContext *params,
                  prepParser::ParameterPackWithEllipsesContext *recurse,
                  array<string, ftypes::NONE> &keywordArguments);
  void defDeclGen(string name, array<string, ftypes::NONE> &keywordArguments);
};

#endif // PREP_PREPVISITOR_HPP

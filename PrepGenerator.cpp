#include "PrepGenerator.hpp"
#include "macroHelpers.hpp"

using fmt::print;
using utils::toHeaderGuard;

PrepGenerator::PrepGenerator(const std::string &fileName)
    : ss(""), fileName(fileName) {
  initGen();
}
void PrepGenerator::initGen() {
  fnstr = std::move(toHeaderGuard(fileName));
  print(ss, "#ifndef {0}_PREPGEN\n#define {0}_PREPGEN\n\n", fnstr);
  defParens();
  defExpand();
}
void PrepGenerator::endGen() { print(ss, "\n#endif // {0}_PREPGEN", fnstr); }
void PrepGenerator::defExpand() {
  print(ss, "\n#define " expd(0) "(" agm ") " agm "\n", depthRows);
  for (int i{1}; i <= depthRows; ++i) {
    print(ss, "#define " expd({}) "(" agm ") ", i);
    for (int j{0}; j < depthCols; ++j)
      print(ss, expd({}) "(", i - 1);
    print(ss, agm);
    for (int j{0}; j < depthCols; ++j)
      print(ss, ")");
    print(ss, "\n");
  }
  print(ss, "\n#define " expd() "(" agm ") " expd({}) "(" agm ")\n\n",
        depthRows);
}
void PrepGenerator::defParens() { print(ss, "#define " par " ()\n"); }
string PrepGenerator::finalizeString(utils::flags &flags) {
  endGen();
  return ss.str();
}
void PrepGenerator::addTree(ParseTree *tree) {
  PrepVisitor visitor{ss};
  visitor.visit(tree);
}

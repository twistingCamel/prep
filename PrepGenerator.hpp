#ifndef PREP_PREPGENERATOR_HPP
#define PREP_PREPGENERATOR_HPP

#include "PrepVisitor.hpp"
#include "utils.hpp"
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <fmt/std.h>
#include <ranges>
#include <string_view>

using antlr4::tree::ParseTree;
using std::ifstream;
using std::ofstream;
using std::string;
using std::string_view;
using std::stringstream;

class PrepGenerator {
protected:
  stringstream ss;
  std::string fileName;
  string fnstr;

public:
  PrepGenerator(const std::string &fileName);
  void initGen();
  void endGen();
  void defExpand();
  void defParens();
  string finalizeString(utils::flags &flags);
  void addTree(ParseTree *tree);

private:
  static constexpr inline int depthRows{4}, depthCols{4};
};

#endif // PREP_PREPGENERATOR_HPP

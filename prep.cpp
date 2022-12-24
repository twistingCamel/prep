#ifndef PREP_CPP
#define PREP_CPP

#include "ANTLRInputStream.h"
#include "CharStream.h"
#include "CommonTokenStream.h"
#include "PrepGenerator.hpp"
#include "PrepVisitor.hpp"
#include "ant/prepLexer.h"
#include "ant/prepParser.h"
#include "tree/ParseTree.h"
#include "utils.hpp"
#include <bits/stdc++.h>
#include <boost/process.hpp>
#include <csignal>
#include <filesystem>
#include <fmt/ranges.h>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <type_traits>

using ant::prepLexer;
using antlr4::ANTLRInputStream;
using antlr4::CommonTokenStream;
using antlr4::tree::ParseTree;
using fmt::print;
using std::cerr;
using std::endl;
using std::ifstream;
using std::ios_base;
using std::ofstream;
using std::runtime_error;

namespace bp = boost::process;

void prep(utils::flags &flags) {
  PrepGenerator generator{flags.output.filename()};
  for (const string &i : flags.filenames) {
    path path{i};
    if (!exists(path))
      throw runtime_error("File " + path.string() + " does not exist");
    if (path.extension().string() != ".prep")
      throw runtime_error("File extension \"" + path.extension().string() +
                          "\" not recognized");
    ifstream file{path, ios_base::in};
    ANTLRInputStream stream{file};
    prepLexer lexer{&stream};
    CommonTokenStream ctstream{&lexer};
    prepParser parser{&ctstream};
    ParseTree *tree = parser.prog();
    generator.addTree(tree);
  }
  string str{std::move(generator.finalizeString(flags))};
  if (flags.format) {
    bp::opstream in{};
    bp::ipstream out{};
    in << str;
    in.close();
    bp::spawn(bp::search_path("clang-format"),
              bp::std_in<in, bp::std_out> flags.output, bp::std_err > stderr);
  } else {
    ofstream outfile{flags.output, ios_base::out | ios_base::trunc};
    print(outfile, "{}", str);
  }
}

#endif // PREP_CPP

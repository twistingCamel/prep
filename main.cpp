#include "prep.hpp"
#include "utils.hpp"
#include <CLI/App.hpp>
#include <CLI/CLI.hpp>
#include <CLI/Error.hpp>
#include <CLI/Macros.hpp>
#include <fmt/color.h>
#include <fmt/ranges.h>
#include <fmt/std.h>
#include <iostream>

using fmt::print;
using std::cerr;
using std::endl;
using std::runtime_error;
using std::string;

int main(int argc, char **argv) {
  utils::flags gFlags{{}, false, "a.hpp"};
  CLI::App app{"The prep compiler"};
  app.add_option("files", gFlags.filenames, "Files to compile to c++ macros");
  app.add_flag("-f,--format", gFlags.format,
               "Format the output before writing to file");
  app.add_option("-o,--output", gFlags.output, "Output file name");
  app.set_version_flag("-v,--version", "0.0.1");
  app.set_help_flag("-h,--help");
  app.set_help_all_flag("-H,--helpall");
  try {
    app.parse(argc, argv);
    if (argc == 1) {
      throw CLI::CallForHelp();
      return 0;
    }
    if (!gFlags.filenames.size()) {
      print(cerr, "prep: {} no input files\n",
            fmt::styled("error:",
                        fmt::fg(fmt::color::red) | fmt::emphasis::bold));
      return -1;
    }
  } catch (const CLI ::ParseError &e) {
    return app.exit(e);
  };
  try {
    prep(gFlags);
  } catch (const runtime_error &e) {
    cerr << e.what() << endl;
  }
  return 0;
}

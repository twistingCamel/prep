#ifndef PREP_UTILS_HPP
#define PREP_UTILS_HPP

#include <filesystem>
#include <fmt/ranges.h>
#include <set>
#include <string>
using std::set;
using std::string;
using std::string_view;
using std::filesystem::path;

namespace utils {
string toHeaderGuard(string_view view);

struct flags {
  set<string> filenames;
  bool format;
  path output;
};
} // namespace utils

#endif // PREP_UTILS_HPP

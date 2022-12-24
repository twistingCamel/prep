#include "utils.hpp"

namespace utils {
string toHeaderGuard(string_view view) {
  string result(view.size(), ' ');
  for (size_t i{0}; i < view.size(); ++i) {
    if (view[i] == '.')
      result[i] = '_';
    else
      result[i] = toupper(view[i]);
  }
  // result += "_PREPGEN_HPP";
  return result;
}
} // namespace utils
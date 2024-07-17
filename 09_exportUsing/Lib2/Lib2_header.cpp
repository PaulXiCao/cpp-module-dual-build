#include "Lib2_header.hpp"

#include <string>

#include "Lib1_header.hpp"

namespace Lib2 {
void print(const std::string_view msg) {
  const std::string full_msg = std::string("[Lib2::print] ").append(msg);
  Lib1::print(full_msg);
}
}  // namespace Lib2
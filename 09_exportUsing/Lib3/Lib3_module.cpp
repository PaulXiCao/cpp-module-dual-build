module;

#include <string>
#include <string_view>

export module Lib3;

import Lib1;

export namespace Lib3 {
void print(const std::string_view msg) {
  const std::string full_msg = std::string("[Lib3::print] ").append(msg);
  Lib1::print(full_msg);
}
}  // namespace Lib3
#include "Lib1_header.hpp"

#include <iostream>

namespace Lib1 {
void print(const std::string_view msg) { std::cout << msg << '\n'; }
}  // namespace Lib1
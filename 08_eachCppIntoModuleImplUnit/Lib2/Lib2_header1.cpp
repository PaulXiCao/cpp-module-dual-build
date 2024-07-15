#ifdef USE_MODULES
module;
#endif

// std includes
#include <iostream>

// external libraries' includes
#ifndef USE_MODULES
#endif

// this library's includes/import
#ifdef USE_MODULES
module lib2;
#else
  #include "Lib2_header1.hpp"
#endif

// external libraries' imports
#ifdef USE_MODULES
#endif

namespace Lib2 {
template <>
std::array<int, 3> copy_and_optionally_flip_sign<int, 3>(const int &val,
                                                         const FlipSign tag) {
  std::array<int, 3> arr;
  arr.fill((tag == FlipSign::no) ? +val : -val);
  return arr;
}
}  // namespace Lib2
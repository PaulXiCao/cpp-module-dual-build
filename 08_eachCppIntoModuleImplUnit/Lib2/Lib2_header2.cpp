#ifdef USE_MODULES
module;
#endif

// std includes
#include <iostream>

// external libraries' includes
#ifndef USE_MODULES
  #include "Lib1_header2.hpp"
#endif

// this library's includes/import
#ifdef USE_MODULES
module lib2;
#else
  #include "Lib2_header2.hpp"
#endif

// external libraries' imports
#ifdef USE_MODULES
import lib1;
#endif

Lib2::FlipSign create_flip_sign(const bool do_flip) {
  return do_flip ? Lib2::FlipSign::yes : Lib2::FlipSign::no;
}

void print(const Lib2::FlipSign sign) {
  my_print(my_struct{.msg = "Lib2::FlipSign: "},
           sign == Lib2::FlipSign::yes ? "yes" : "no");
}
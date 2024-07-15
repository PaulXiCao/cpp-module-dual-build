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
module lib1;
#else
  #include "Lib1_header1.hpp"
#endif

// external libraries' imports
#ifdef USE_MODULES
#endif

void my_print(const my_struct &s) { std::cout << s.msg << '\n'; }
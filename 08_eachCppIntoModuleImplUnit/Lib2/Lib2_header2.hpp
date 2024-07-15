#ifndef USE_MODULES
  #pragma once
#endif

// std includes
#ifdef USE_GLOBAL_MODULE_INCLUDES
  #include <string>
  #include <string_view>
#endif

// this library's includes
#ifndef USE_MODULES
  #include "Lib2_header1.hpp"
#endif

// external libraries' includes/import
#ifdef USE_GLOBAL_MODULE_INCLUDES
  #ifndef USE_MODULES  // fixme: Should be more specific? E.g.
                       // DOES_LIB1_USE_MODULES
    #include "Lib1_header1.hpp"
  #else
    #define IMPORT_LIB1
  #endif
#endif

#ifdef USE_NON_INCLUDES_CONTENT
MODULE_EXPORT inline my_struct create_my_struct(const std::string_view str) {
  return my_struct{.msg = std::string{str}};
}
MODULE_EXPORT Lib2::FlipSign create_flip_sign(const bool do_flip);
MODULE_EXPORT void print(const Lib2::FlipSign sign);
#endif

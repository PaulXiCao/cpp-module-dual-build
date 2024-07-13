#ifndef USE_MODULES
  #pragma once
#endif

#ifdef USE_INCLUDES_FROM_STD
  #include <string>
  #include <string_view>
#endif

#ifdef USE_INCLUDES_FROM_THIS_LIBRARY
  #include "Lib2_header1.hpp"
#endif

#ifdef USE_INCLUDES_FROM_OTHER_LIBRARIES
  #ifndef USE_MODULES  // fixme: Should be more specific? E.g.
                       // DOES_LIB1_USE_MODULES
    #ifndef ONLY_SCAN_OTHER_LIBRARIES_FOR_IMPORT
      #include "Lib1_header1.hpp"
    #endif
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

#ifndef USE_MODULES
  #pragma once
#endif

// std includes
#ifdef USE_GLOBAL_MODULE_INCLUDES
  #include <string_view>
#endif

// this library's includes
#ifndef USE_MODULES
  #include "Lib1_header1.hpp"
#endif

// external libraries' includes/import
#ifdef USE_GLOBAL_MODULE_INCLUDES
  #ifndef USE_MODULES
  #else
  #endif
#endif

#ifdef USE_NON_INCLUDES_CONTENT
MODULE_EXPORT void my_print(const my_struct &s,
                            const std::string_view trailing_msg);
#endif

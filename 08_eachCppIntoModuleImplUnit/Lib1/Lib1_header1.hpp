#ifndef USE_MODULES
  #pragma once
#endif

// std includes
#ifdef USE_GLOBAL_MODULE_INCLUDES
  #include <string>
#endif

// this library's includes
#ifndef USE_MODULES
#endif

// external libraries' includes/import
#ifdef USE_GLOBAL_MODULE_INCLUDES
  #ifndef USE_MODULES
  #else
  #endif
#endif

#ifdef USE_NON_INCLUDES_CONTENT
MODULE_EXPORT struct my_struct {
  std::string msg;
};
MODULE_EXPORT void my_print(const my_struct &);
#endif
#ifndef USE_MODULES
  #pragma once
#endif

#ifdef USE_INCLUDES_FROM_STD
  #include <string>
#endif

#ifdef USE_INCLUDES_FROM_THIS_LIBRARY
#endif

#ifdef USE_INCLUDES_FROM_OTHER_LIBRARIES
#endif

#ifdef USE_NON_INCLUDES_CONTENT
MODULE_EXPORT struct my_struct {
  std::string msg;
};

MODULE_EXPORT void my_print(const my_struct &);
#endif
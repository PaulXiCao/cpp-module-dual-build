#ifndef USE_MODULES
#pragma once
#endif

#ifdef USE_INCLUDES_FROM_STD
#include <string_view>
#endif

#ifdef USE_INCLUDES_FROM_THIS_LIBRARY
#include "myHeader1.hpp"
#endif

#ifdef USE_INCLUDES_FROM_OTHER_LIBRARIES
#endif

#ifdef USE_NON_INCLUDES_CONTENT
MODULE_EXPORT void my_print(const my_struct &s, const std::string_view trailing_msg);
#endif

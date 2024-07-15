module;

#define USE_INCLUDES_FROM_STD
#include "Lib1_header1.hpp"
#include "Lib1_header2.hpp"
#undef USE_INCLUDES_FROM_STD

export module lib1;

#define MODULE_EXPORT export
#define USE_NON_INCLUDES_CONTENT
#include "Lib1_header1.hpp"
#include "Lib1_header2.hpp"
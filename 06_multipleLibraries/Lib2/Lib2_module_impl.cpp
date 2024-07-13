module;

#define USE_INCLUDES_FROM_STD
#include "Lib2_header1.cpp"
#include "Lib2_header2.cpp"
#undef USE_INCLUDES_FROM_STD

module lib2;

#define MODULE_EXPORT
#define USE_NON_INCLUDES_CONTENT
#include "Lib2_header1.cpp"
#include "Lib2_header2.cpp"
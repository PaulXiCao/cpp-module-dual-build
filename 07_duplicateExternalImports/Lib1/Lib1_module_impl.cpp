module;

#define USE_INCLUDES_FROM_STD
#include "Lib1_header1.cpp"
#include "Lib1_header2.cpp"
#undef USE_INCLUDES_FROM_STD

module lib1;

#define USE_NON_INCLUDES_CONTENT
#include "Lib1_header1.cpp"
#include "Lib1_header2.cpp"
module;

#define USE_INCLUDES_FROM_STD
#include "Lib2_header1.cpp"
#include "Lib2_header2.cpp"
#undef USE_INCLUDES_FROM_STD

module lib2;

#define USE_INCLUDES_FROM_OTHER_LIBRARIES
#include "Lib2_header1.cpp"
#include "Lib2_header2.cpp"
#undef USE_INCLUDES_FROM_OTHER_LIBRARIES

#ifdef IMPORT_LIB1
import lib1;
#endif

#define USE_NON_INCLUDES_CONTENT
#include "Lib2_header1.cpp"
#include "Lib2_header2.cpp"
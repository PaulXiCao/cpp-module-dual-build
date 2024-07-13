module;

#define USE_INCLUDES_FROM_STD
#include "Lib2_header1.cpp"
#include "Lib2_header2.cpp"
#undef USE_INCLUDES_FROM_STD

module lib2;

// check if lib1 needs to be imported
#ifdef USE_MODULES
// check if already imported in primary module interface
  #define USE_INCLUDES_FROM_OTHER_LIBRARIES
  #define ONLY_SCAN_OTHER_LIBRARIES_FOR_IMPORT
  #include "Lib2_header1.hpp"
  #include "Lib2_header2.hpp"
  #undef ONLY_SCAN_OTHER_LIBRARIES_FOR_IMPORT
  #undef USE_INCLUDES_FROM_OTHER_LIBRARIES

  #ifndef IMPORT_LIB1  // was not imported in primary module interface
    #define USE_INCLUDES_FROM_OTHER_LIBRARIES
    #include "Lib2_header1.cpp"
    #include "Lib2_header2.cpp"
    #undef USE_INCLUDES_FROM_OTHER_LIBRARIES

    #ifdef IMPORT_LIB1  // cpp files want import
import lib1;
    #endif
  #endif
#endif

#define USE_NON_INCLUDES_CONTENT
#include "Lib2_header1.cpp"
#include "Lib2_header2.cpp"
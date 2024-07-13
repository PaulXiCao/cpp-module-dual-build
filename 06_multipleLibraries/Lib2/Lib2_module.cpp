module;

#define USE_INCLUDES_FROM_STD
#include "Lib2_header1.hpp"
#include "Lib2_header2.hpp"
#undef USE_INCLUDES_FROM_STD

export module lib2;

#define USE_INCLUDES_FROM_OTHER_LIBRARIES
#include "Lib2_header1.hpp"
#include "Lib2_header2.hpp"
#undef USE_INCLUDES_FROM_OTHER_LIBRARIES

#ifdef IMPORT_LIB1
import lib1;
#endif

#define MODULE_EXPORT export
#define USE_NON_INCLUDES_CONTENT
#include "Lib2_header1.hpp"
#include "Lib2_header2.hpp"

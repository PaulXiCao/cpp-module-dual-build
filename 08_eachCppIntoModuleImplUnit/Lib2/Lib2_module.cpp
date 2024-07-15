module;

#define USE_GLOBAL_MODULE_INCLUDES
#include "Lib2_header1.hpp"
#include "Lib2_header2.hpp"
#undef USE_GLOBAL_MODULE_INCLUDES

export module lib2;

// external libraries' imports
// fixme: Should this just be hard-coded instead?
//  But this is slightly safer incase the includes to lib1 get removed in the
//  headers. But it is still linked to in the CMakeLists.txt...
#ifdef IMPORT_LIB1
import lib1;
#endif

// this library's declarations/exports/etc.
#define MODULE_EXPORT export
#define USE_NON_INCLUDES_CONTENT
#include "Lib2_header1.hpp"
#include "Lib2_header2.hpp"

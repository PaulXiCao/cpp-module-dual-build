module;

#define USE_GLOBAL_MODULE_INCLUDES
#include "Lib1_header1.hpp"
#include "Lib1_header2.hpp"
#undef USE_GLOBAL_MODULE_INCLUDES

export module lib1;

// external libraries' imports

// this library's declarations/exports/etc.
#define MODULE_EXPORT export
#define USE_NON_INCLUDES_CONTENT
#include "Lib1_header1.hpp"
#include "Lib1_header2.hpp"
module;

#define USE_INCLUDES_FROM_STD
#include "myHeader1.hpp"
#include "myHeader2.hpp"
#undef USE_INCLUDES_FROM_STD

export module myModule;

#define MODULE_EXPORT export
#define USE_NON_INCLUDES_CONTENT
#include "myHeader1.hpp"
#include "myHeader2.hpp"
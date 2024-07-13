module;

#define USE_STD_INCLUDES
#include "myHeader.hpp"

export module myModule;

#undef USE_STD_INCLUDES
#define USE_EXCEPT_NON_STD_INCLUDES
#define MODULE_EXPORT export
#include "myHeader.hpp"
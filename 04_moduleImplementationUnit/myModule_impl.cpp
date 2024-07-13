module;

#define USE_STD_INCLUDES
#include "myHeader.cpp"

module myModule;

#undef USE_STD_INCLUDES
#define USE_EXCEPT_NON_STD_INCLUDES
#define MODULE_EXPORT
#include "myHeader.cpp"
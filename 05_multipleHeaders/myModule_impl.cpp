module;

#define USE_INCLUDES_FROM_STD
#include "myHeader1.cpp"
#include "myHeader2.cpp"
#undef USE_INCLUDES_FROM_STD

module myModule;

#define MODULE_EXPORT
#define USE_NON_INCLUDES_CONTENT
#include "myHeader1.cpp"
#include "myHeader2.cpp"
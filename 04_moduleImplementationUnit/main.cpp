#ifdef USE_MODULES

#pragma message("Importing myModule in main!")
import myModule;

#else

#pragma message("including myHeader in main!")
#include "myHeader.hpp"

#endif

int main()
{
    my_print("42 zebras");
}
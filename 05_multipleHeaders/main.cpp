#ifdef USE_MODULES

#pragma message("Importing myModule in main!")
import myModule;

#else

#pragma message("including myHeader in main!")
#include "myHeader1.hpp"
#include "myHeader2.hpp"

#endif

int main()
{
    const my_struct s{.msg = "42 zebras"};
    my_print(s);
    my_print(s, " or kangoroos");
}
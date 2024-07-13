#ifdef USE_MODULES

#pragma message("Importing modules in main!")
import lib1;
import lib2;

#else

#pragma message("including headers in main!")
#include "Lib1_header1.hpp"
#include "Lib2_header2.hpp"

#endif

int main()
{
    // from "Lib1_header1.hpp"
    const my_struct s{.msg = "42 zebras"};
    my_print(s);

    // from "Lib2_header2.hpp"
    const my_struct ss = create_my_struct("42 zebras");
    print(create_flip_sign(true));
}
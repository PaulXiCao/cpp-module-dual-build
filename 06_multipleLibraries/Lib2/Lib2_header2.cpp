#ifdef USE_INCLUDES_FROM_STD
#include <iostream>
#endif

#ifdef USE_INCLUDES_FROM_THIS_LIBRARY
#include "Lib2_header2.hpp"
#endif

#ifdef USE_INCLUDES_FROM_OTHER_LIBRARIES
#include "Lib1_header2.hpp"
#endif

#ifdef USE_NON_INCLUDES_CONTENT
Lib2::FlipSign create_flip_sign(const bool do_flip)
{
    return do_flip ? Lib2::FlipSign::yes : Lib2::FlipSign::no;
}

void print(const Lib2::FlipSign sign)
{
    my_print(my_struct{.msg = "Lib2::FlipSign: "}, sign == Lib2::FlipSign::yes ? "yes" : "no");
}
#endif
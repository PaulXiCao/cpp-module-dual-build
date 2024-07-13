#ifdef USE_INCLUDES_FROM_STD
#include <iostream>
#endif

#ifdef USE_INCLUDES_FROM_THIS_LIBRARY
#include "Lib1_header2.hpp"
#endif

#ifdef USE_INCLUDES_FROM_OTHER_LIBRARIES
#endif

#ifdef USE_NON_INCLUDES_CONTENT
void my_print(const my_struct &s, const std::string_view trailing_msg)
{
    my_print(s);
    std::cout << '\t';
    std::cout << trailing_msg << '\n';
}
#endif
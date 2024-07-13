#ifdef USE_STD_INCLUDES
#include <iostream>
#endif

#ifdef USE_EXCEPT_NON_STD_INCLUDES
#include "myHeader.hpp"

void my_print(const std::string_view msg)
{
    std::cout << msg << '\n';
}
#endif
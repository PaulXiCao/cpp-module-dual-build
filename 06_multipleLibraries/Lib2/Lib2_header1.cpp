#ifdef USE_INCLUDES_FROM_STD
#endif

#ifdef USE_INCLUDES_FROM_THIS_LIBRARY
#include "Lib2_header1.hpp"
#endif

#ifdef USE_INCLUDES_FROM_OTHER_LIBRARIES
#endif

#ifdef USE_NON_INCLUDES_CONTENT
namespace Lib2
{
    template <>
    std::array<int, 3> copy_and_optionally_flip_sign<int, 3>(const int &val, const FlipSign tag)
    {
        std::array<int, 3> arr;
        arr.fill((tag == FlipSign::no) ? +val : -val);
        return arr;
    }
}
#endif
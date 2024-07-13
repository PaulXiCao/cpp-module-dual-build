#ifdef USE_STD_INCLUDES
#include <string_view>
#endif

#ifdef USE_EXCEPT_NON_STD_INCLUDES
MODULE_EXPORT void my_print(const std::string_view msg);
#endif
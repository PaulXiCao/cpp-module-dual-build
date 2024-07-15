#ifdef USE_INCLUDES_FROM_STD
  #include <iostream>
#endif

#ifdef USE_INCLUDES_FROM_THIS_LIBRARY
  #include "Lib1_header1.hpp"
#endif

#ifdef USE_INCLUDES_FROM_OTHER_LIBRARIES
#endif

#ifdef USE_NON_INCLUDES_CONTENT
void my_print(const my_struct &s) { std::cout << s.msg << '\n'; }
#endif
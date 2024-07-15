#ifndef USE_MODULES
  #pragma once
#endif

#ifdef USE_INCLUDES_FROM_STD
  #include <array>
  #include <cstddef>
#endif

#ifdef USE_INCLUDES_FROM_THIS_LIBRARY
#endif

#ifdef USE_INCLUDES_FROM_OTHER_LIBRARIES
#endif

#ifdef USE_NON_INCLUDES_CONTENT

namespace Lib2 {
MODULE_EXPORT enum class FlipSign { yes, no };

MODULE_EXPORT
template <class T, std::size_t N>
std::array<T, N> copy_and_optionally_flip_sign(const T &val,
                                               const FlipSign tag);
}  // namespace Lib2
#endif
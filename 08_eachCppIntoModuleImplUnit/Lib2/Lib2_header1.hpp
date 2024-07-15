#ifndef USE_MODULES
  #pragma once
#endif

// std includes
#ifdef USE_GLOBAL_MODULE_INCLUDES
  #include <array>
  #include <cstddef>
#endif

// this library's includes
#ifndef USE_MODULES
#endif

// external libraries' includes/import
#ifdef USE_GLOBAL_MODULE_INCLUDES
  #ifndef USE_MODULES
  #else
  #endif
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
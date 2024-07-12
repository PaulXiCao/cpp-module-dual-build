module;

#include <iostream>

export module myModule;

#define MY_EXPORT export

#include "myHeader.hpp"

// gcc doesn't yet implement private module fragments
#if !defined(__GNUC__) || defined(__clang__)
module :private;
#pragma message("private mod frag")
#endif

#include "myHeader.cpp"

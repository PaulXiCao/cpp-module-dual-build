module;

#include "Lib1_header.hpp"

export module Lib1;

// export using void Lib1::print(const std::string_view msg);
export namespace Lib1 {
using Lib1::print;
}  // namespace Lib1
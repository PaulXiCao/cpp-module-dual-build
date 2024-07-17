# Overview

This repository explores the possibility to package a C++ library for dual build mode: Either use it via classical header includes or via module import.

The goal is for code as this example to work:
```cpp
#ifdef USE_MODULES
    import myLib;                   // imports: myLib::{myFunc1, myFunc2}
#else
    #include <myLib/header1.hpp>    // includes: myLib::myFunc1
    #include <myLib/header2.hpp>    // includes: myLib::myFunc2
#endif

int main() {
    myLib::myFunc1();
    myLib::myFunc2();
}
```

The main motivation is to make use of possible compile-time reductions of module imports while still being backward compatible for older compilers.
The changes to the original hpp/cpp files should be minimal and where possible, no duplication of code (even for declaring entities of the modules).

See [this](https://paulxicao.github.io/c++/2024/07/14/cpp-modules-dual-build.html) associated blog post explaining most implementation ideas.

# Code structure

There are multiple sub-folders, e.g. 01/, .., 06/.
Every folder adds some new feature for a dual build mode of general libraries.

- `01/`: Just a simple "Hello World"-type module.
- `02/`: Dual build mode of a trivial library containing only one function.
- `03/`: Dual build mode of a trivial library in a style similar to the fmt library.
- `04/`: Dual build mode with a separate module implementation unit.
- `05/`: Dual build mode of a library containing multiple hpp/cpp files.
- `06/`: Dual build mode of multiple libraries.
- `07/`: Dual build mode where the import of external modules might appear multiple times (e.g. in primary module interface _and_ in the implementation unit).
- `08/`: Each cpp file is (conditionally) converted to a module implementation unit instead of a separate unity-build type module implementation unit.
- `09/`: Create wrapper module explicitly stating each entity to export. Module has no implementations (non-ABI breaking).

# Resources

- Daniela-E explains how she transformed fmt to use modules (alongside header build) on [reddit](https://www.reddit.com/r/cpp/comments/1busseu/comment/kxvfayf).
- My [blog post](https://paulxicao.github.io/c++/2024/07/14/cpp-modules-dual-build.html) explaining implementation details.
- [Reddit discussion](https://www.reddit.com/r/cpp/comments/1e37dd6/dual_build_mode_header_includes_or_module_imports/) about this dual build idea

# Todos

- [ ] How to treat external libraries automatically (instead of checking a library specific macro multiple times)?
- [ ] Are there any issues with shared/static libraries?
- [ ] How should one treat the case when only part of the library has been modularized?
- [ ] Typical unity-build issues (e.g. static functions with the same name/arguments in different cpp files)?
- [ ] Discuss expected compile-time benefits/regressions
  - [ ] benefit: `import`ing should be faster than `include`ing headers multiple times
  - [ ] regression: modularizing a library under development might be result in long compilation times of the module implementation unit `*module_impl.cpp`)?
- [ ] Investigate wrongful `include`ing of headers when the module was build instead (should not be possible for correctly set include directories)?
- [ ] Does ccache work with modules in general?
- [x] Can we import the same module in a primary module interface and in one of its module implementation units? 
  If so, then we could get rid of the ugly `ONLY_SCAN_OTHER_LIBRARIES_FOR_IMPORT` macro.
  - Answer: Yes! This reduces the amount of boilerplate ;)
- [ ] Try out `import std;` instead of scanning specifically for STD headers.
- [ ] Investigate where external includes should go (global fragment vs module fragment).
  To be explicit look at this pseudo example: `#include <LibA/someHeader.hpp>` being included in a module unit for `LibB`.
- [x] Convert each cpp file into their own module implementation unit instead of a separate unity build type module implementation unit (possibly faster incremental build times).
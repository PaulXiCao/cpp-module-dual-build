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

# Resources

- Daniela-E explains how she transformed fmt to use modules (alongside header build) on [reddit](https://www.reddit.com/r/cpp/comments/1busseu/comment/kxvfayf).
- My [blog post](https://paulxicao.github.io/c++/2024/07/14/cpp-modules-dual-build.html) explaining implementation details.
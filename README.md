# Overview

We will explore modules by examples. 
Every folder adds something new to modules.
If you want to see the a full blown example see ... (not yet created.)

A module has a _module interface_ declares its public interface (e.g. namespaces, types, functions, etc.).

A _module implementation_ defines the declared entities.

A module can be split into submodules called _partitions_.

It has exactly one _primary module interface_, but multiple 

# Simplest module

The folder [01_simpleFunction/](01_simpleFunction/) contains a "Hello World"-type module.
It contains the

# 04: Seperate module implementation unit

Benefit: Changing implementation (i.e. `myHeader.cpp`) does not force recompilication chain (e.g. `myModule.cpp` and whereever it is `import`ed).

# 05: Collect multiple headers in one wrapper module

Multiple headers and translation units are collected in one module (+implementation unit).

# Resources/Ideas

- switch by CMake option
- switch by preprocessor macro
- non-intrusive for headers: create thin wrapper modules
- intrusive for headers: insert MY_EXPORT macro into header to create modules out of them
- look into fmt
    - Daniela-E explains how she transformed fmt to use modules (alongside header build): 
        https://www.reddit.com/r/cpp/comments/1busseu/comment/kxvfayf
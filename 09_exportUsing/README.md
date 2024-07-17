Non-ABI breaking implementation for mixing includes and imports.
See https://clang.llvm.org/docs/StandardCPlusPlusModules.html#export-using-style .

- Lib1: Library exporting a header as well as a module.
- Lib2: Including Lib1 via its header.
- Lib3: Importing Lib1 via its module.

# Build

For build instructions see `Makefile`.

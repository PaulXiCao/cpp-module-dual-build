#!/bin/bash

# modules with gcc
cmake -G Ninja -B build_modules_gcc
ninja -C build_modules_gcc

# modules with clang
cmake -G Ninja -B build_modules_clang -D CMAKE_C_COMPILER="clang" -D CMAKE_CXX_COMPILER="clang++"
ninja -C build_modules_clang

# without modules (aka only header + impl)
cmake -B build_headers -G Ninja -D ENABLE_MODULES=OFF
ninja -C build_headers

# run all mains
./build_modules_gcc/main
./build_modules_clang/main
./build_headers/main
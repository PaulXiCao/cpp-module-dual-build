# with modules 
## gcc
```bash
cmake -G Ninja -B build_modules_gcc
ninja -C build_modules_gcc
```

## clang
```bash
cmake -G Ninja -B build_modules_clang -D CMAKE_C_COMPILER="clang" -D CMAKE_CXX_COMPILER="clang++"
ninja -C build_modules_clang
```

# without modules (aka only header + impl)
```bash
cmake -B build_headers -G Ninja -D ENABLE_MODULES=OFF
ninja -C build_headers
```

# Change compared to `06/`

Get rid of all the overhead by `ONLY_SCAN_OTHER_LIBRARIES_FOR_IMPORT`.
We can import a module in the primary interface and at the same time in the implementation unit!
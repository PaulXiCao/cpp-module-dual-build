# with modules
```bash
cmake -B build_modules -G Ninja
ninja -C build_modules
```

# without modules (aka only header + impl)
```bash
cmake -B build_modules -G Ninja -D ENABLE_MODULES=OFF
ninja -C build_modules
```

# Simple Function

"Hello World"-type example: Having a single function defined within the main module file.

# Build and run

```bash
cmake -G Ninja -B build
ninja -C build
./build/main
echo $? # <- should print 42
```
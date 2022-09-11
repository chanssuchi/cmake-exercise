# Build
## Default compile main
```
cd exampile
cmake -B build
cmake --build build
```
## Compile app and main
```
cd example04
cmake -B build -DAPP=ON 
cmake --build build
```
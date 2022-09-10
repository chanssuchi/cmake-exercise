# cmake-exercise
## Example01
编译常规项目。
```
example01
├── build
│   └── README.md
├── CMakeLists.txt
├── include
│   ├── func1.h
│   └── func2.h
└── src
    ├── CMakeLists.txt
    ├── func1.cpp
    ├── func2.cpp
    └── main.cpp
```
## Example02
编译库。
```
example02
├── build
│   └── README.md
├── CMakeLists.txt
└── math
    ├── math.cpp
    └── math.h
```
## Example03
链接已有的库。
```
example03
├── build
│   └── README.md
├── CMakeLists.txt
├── mymath
│   ├── include
│   │   └── mymath.h
│   └── lib
│       ├── libmymath.a
│       └── libmymath.so
└── src
    └── main.cpp
```



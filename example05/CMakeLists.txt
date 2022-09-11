cmake_minimum_required(VERSION 3.22.1)
project(example05)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
option(HELLO "HELLO DEFINITION" OFF)

if (HELLO)
    add_compile_options(-DHELLO)
endif()

add_executable(main ${PROJECT_SOURCE_DIR}/src/main.cpp)

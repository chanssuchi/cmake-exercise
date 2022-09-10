cmake_minimum_required(VERSION 3.22.1)
project(example03)

set(RESOURCES ${PROJECT_SOURCE_DIR}/src/main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#include_directories(${PROJECT_SOURCE_DIR}/mymath/include)

find_library(MATH_LIB mymath HINTS ${PROJECT_SOURCE_DIR}/mymath/lib)

add_executable(${PROJECT_NAME} ${RESOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC mymath/include)

target_link_libraries(${PROJECT_NAME} ${MATH_LIB})


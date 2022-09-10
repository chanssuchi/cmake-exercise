cmake_minimum_required(VERSION 3.22.1)
project(mymath)

set(RESOURCES ${PROJECT_SOURCE_DIR}/mymath/mymath.cpp)

# libmath_shared.so
add_library(math_shared SHARED ${RESOURCES})
# libmath_static.a
add_library(math_static STATIC ${RESOURCES})

set_target_properties(math_shared PROPERTIES OUTPUT_NAME "mymath")
set_target_properties(math_static PROPERTIES OUTPUT_NAME "mymath")


set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

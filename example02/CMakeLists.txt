cmake_minimum_required(VERSION 3.22.1)
project(math)

set(RESOURCES ${PROJECT_SOURCE_DIR}/math/math.cpp)

# libmath_shared.so
add_library(math_shared SHARED ${RESOURCES})
# libmath_static.a
add_library(math_static STATIC ${RESOURCES})

set_target_properties(math_shared PROPERTIES OUTPUT_NAME "math")
set_target_properties(math_static PROPERTIES OUTPUT_NAME "math")


set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

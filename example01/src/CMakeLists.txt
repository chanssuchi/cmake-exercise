cmake_minimum_required(VERSION 3.22.1)
message(STATUS "PROJECT_SOURCE_DIR ${PROJECT_SOURCE_DIR}")
message(STATUS "PROJECT_BINARY_DIR ${PROJECT_BINARY_DIR}")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
project(example01)

include_directories(../include)

aux_source_directory(. SOURCES)

add_compile_options(-std=c++11 -Wall)
add_executable(${PROJECT_NAME} ${SOURCES})

cmake_minimum_required(VERSION 3.22.1)
message("PROJECT_SOURCE_DIR ${PROJECT_SOURCE_DIR}")
message("PROJECT_BINARY_DIR ${PROJECT_BINARY_DIR}")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
project(example01)
include_directories(../include)
aux_source_directory(. SOURCES)
add_executable(${PROJECT_NAME} ${SOURCES})


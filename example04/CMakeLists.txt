cmake_minimum_required(VERSION 3.22.1)

project(example04)

option(APP "enable app compilation" OFF)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

message(STATUS "APP: ${APP}")

if (APP)
    add_executable(app src/app.cpp)
    add_executable(main src/main.cpp)
else()
    add_executable(main src/main.cpp)
endif()

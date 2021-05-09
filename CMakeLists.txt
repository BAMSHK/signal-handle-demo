PROJECT(signal-handle-demo)

cmake_minimum_required(VERSION 3.13)

add_compile_options(-std=c++11 -Wall)

set(TOP_EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${TOP_EXECUTABLE_OUTPUT_PATH})
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

set(TARGET signal-handle-demo)
add_subdirectory(src)
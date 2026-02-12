cmake_minimum_required(VERSION 3.12)
project(Calc LANGUAGES CXX)

add_library(maths SHARED adder.cpp)

# This defines MATHS_EXPORTS when building the DLL
target_compile_definitions(maths PRIVATE MATHS_EXPORTS)

add_executable(calc calc.cpp)
target_include_directories(calc PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(calc PRIVATE maths)




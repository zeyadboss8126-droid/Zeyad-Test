cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(Calc)

add_library(maths adder.cpp)
add_executable(calc calc.cpp)

target_include_directories(calc PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(calc maths)



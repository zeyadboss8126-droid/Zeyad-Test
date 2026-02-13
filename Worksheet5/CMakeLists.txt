cmake_minimum_required(VERSION 3.20)
project(Worksheet5 LANGUAGES CXX)

add_library(maths SHARED adder.cpp adder.h)
target_compile_definitions(maths PRIVATE ADDER_EXPORTS)
target_include_directories(maths PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(calc calc.cpp)
target_link_libraries(calc PRIVATE maths)
install(TARGETS maths calc
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION bin
        ARCHIVE DESTINATION lib)

include(CPack)
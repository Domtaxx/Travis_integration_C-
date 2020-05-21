cmake_minimum_required(VERSION 3.2)

project(calculadora LANGUAGES CXX)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(calculadora
    main.cpp
    calculadora.hpp
    calculadora.cpp)
target_link_libraries(calculadora ${GTEST_LIBRARIES} pthread)

cmake_minimum_required(VERSION 3.10)
project(FizzBuzz CXX)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-Wall -Wextra -pedantic -Werror -Wno-unused-parameter -Wunused)

#include(cmake/GTest.cmake)
find_package(GTest REQUIRED)
include_directories()

add_subdirectory(FizzBuzz)

enable_testing()
add_test(tests FizzBuzz/tests)

add_custom_target(tests1
                  COMMAND "./FizzBuzz/tests"
                  DEPENDS tests)

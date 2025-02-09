cmake_minimum_required(VERSION 3.14)
project(hello_world VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
add_library(hello_lib src/hello.cpp)
target_include_directories(hello_lib PUBLIC include)

# Add executable
add_executable(hello_world src/main.cpp)
target_link_libraries(hello_world PRIVATE hello_lib)

# Testing
enable_testing()
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(hello_test tests/hello_test.cpp)
target_link_libraries(hello_test PRIVATE hello_lib GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(hello_test) 
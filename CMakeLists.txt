cmake_minimum_required(VERSION 3.10)

SET(CMAKE_COLOR_MAKEFILE ON)

project(mainapp)

# Define the project executable
add_executable(mainapp src/main.cpp)

# Require compiler to support cxx_lambda_init_captures
target_compile_features(mainapp PRIVATE cxx_lambda_init_captures)

# Required for GCC 13.2.0 on arm64
target_compile_options(mainapp PRIVATE -Wall -pedantic)
target_link_options(mainapp PRIVATE -Wl,-ld_classic)

# These are the only lines required to add libnuminteg
add_subdirectory(src/NumericIntegration)
target_link_libraries(mainapp numinteg)

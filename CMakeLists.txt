cmake_minimum_required(VERSION 3.10)

SET(CMAKE_COLOR_MAKEFILE ON)
# SET(CMAKE_VERBOSE_MAKEFILE ON)

project(mainapp)

add_executable(mainapp src/main.cpp)
target_compile_features(mainapp PRIVATE cxx_lambda_init_captures)

target_compile_options(mainapp PRIVATE -Wall -pedantic)
target_link_options(mainapp PRIVATE -Wl,-ld_classic) 

add_subdirectory(src/NumericIntegration)
target_link_libraries(mainapp numinteg)
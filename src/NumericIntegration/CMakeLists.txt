cmake_minimum_required(VERSION 3.10)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(numinteg VERSION 1.0.1 DESCRIPTION "Numeric integration for single dimension functions")

add_library(numinteg STATIC
  NumericIntegration.cpp
)

target_compile_options(numinteg PRIVATE -Wall -pedantic)
target_link_options(numinteg PRIVATE -Wl,-ld_classic) 

set_target_properties(numinteg PROPERTIES VERSION ${PROJECT_VERSION})

set_target_properties(numinteg PROPERTIES SOVERSION 1)

set_target_properties(numinteg PROPERTIES PUBLIC_HEADER include/NumericIntegration.h)
target_include_directories(numinteg PRIVATE include)
target_include_directories(numinteg INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

include(GNUInstallDirs)

install(TARGETS numinteg
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

add_subdirectory(test PRIVATE)


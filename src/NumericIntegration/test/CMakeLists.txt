###########################################################
# Google Test

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  numinteg_test
  NumericIntegration.test.cpp
)

target_link_libraries(numinteg_test numinteg)

target_link_libraries(
  numinteg_test
  GTest::gtest_main
)
target_compile_options(numinteg_test PRIVATE -Wall -pedantic)
target_link_options(numinteg_test PRIVATE -Wl,-ld_classic) 

include(GoogleTest)
gtest_discover_tests(numinteg_test)
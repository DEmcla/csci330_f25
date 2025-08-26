# Simple test executable
add_executable(hw15_tests test_main.cpp)
target_include_directories(hw15_tests PRIVATE ../src)
add_test(NAME HW15_Tests COMMAND hw15_tests)

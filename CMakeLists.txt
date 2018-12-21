# cmake version to be used
cmake_minimum_required( VERSION 3.0 )

# project name
project( cpp_test )

# flags

# files

# include
include_directories( ./include ./src )

# target
add_executable( test_bin ./src/main.cpp)

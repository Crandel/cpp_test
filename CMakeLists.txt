# cmake version to be used
cmake_minimum_required( VERSION 3.0 )

# project name
project( cpp_test )

# flags
set(CMAKE_CXX_STANDARD 11)  # enable C++11 standard
set(PROJECT_SOURCE_DIR ./src)
set(PROJECT_INCLUDE_DIR ./include)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# files

# include
include_directories( ${PROJECT_SOURCE_DIR} ${PROJECT_INCLUDE_DIR} )

# target
file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/*.cpp)
add_executable( test_bin ${SRC_FILES})


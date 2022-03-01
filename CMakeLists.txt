cmake_minimum_required(VERSION 3.17)
project(my_project_name)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tst)

## Use next line if you are going to use Google Test
# add_subdirectory(lib/googletest)
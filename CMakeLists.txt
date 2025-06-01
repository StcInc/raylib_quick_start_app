cmake_minimum_required(VERSION 3.9)
project(raylib_tryout)

set (CMAKE_CXX_STANDARD 14)

find_package(raylib)

add_executable(main main.cc)

target_link_libraries(main raylib)

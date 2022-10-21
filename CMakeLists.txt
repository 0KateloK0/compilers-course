cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)

project(compiler)

add_subdirectory(src)

add_subdirectory(app)

add_subdirectory(tests)
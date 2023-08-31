cmake_minimum_required(VERSION 3.0.0)
project(function_pointer VERSION 0.1.0 LANGUAGES C)

add_executable(function_pointer function_pointer.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

cmake_minimum_required(VERSION 3.0.0)
project(defi VERSION 0.1.0 LANGUAGES C)


add_executable(defi konwledge/other/defi.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

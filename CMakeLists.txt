cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(TFTP LANGUAGES C)

list(PREPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")
find_package(SpicyPlugin REQUIRED)

if (NOT CMAKE_BUILD_TYPE)
    # Default to release build.
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "")
endif ()

add_subdirectory(analyzer)

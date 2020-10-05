cmake_minimum_required(VERSION 3.5)

set(WITH_UNITTEST OFF CACHE BOOL "Build unittest")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_subdirectory(modules/module1)

if(${WITH_UNITTEST})
    find_package(GTest REQUIRED)
    add_subdirectory(test/module1)
endif()

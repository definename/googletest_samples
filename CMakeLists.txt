cmake_minimum_required(VERSION 3.5)

# Workaround for gtest_add_tests function definition
if ("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" STREQUAL "3.5")
    include(FindGTest)
else()
    include(GoogleTest)
endif()

include(ExternalProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(OPENSOURCE_DIR ${CMAKE_SOURCE_DIR}/opensource)
set(OPENSOURCE_INSTALL_DIR ${CMAKE_BINARY_DIR}/opensource)
set(GTEST_ROOT ${OPENSOURCE_INSTALL_DIR}/googletest)

find_package(Threads REQUIRED)

ExternalProject_Add(
    googletest
    URL "${OPENSOURCE_DIR}/googletest-master.zip"
    URL_MD5 7f8641bf21d39a7b30b64b55cbb13677
    CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX:PATH=${GTEST_ROOT}
        -DCMAKE_CXX_STANDARD=11)

set(GTEST_INCLUDE_DIRS
    ${OPENSOURCE_INSTALL_DIR}/googletest/include)
set(GTEST_LIBRARIES
    ${OPENSOURCE_INSTALL_DIR}/googletest/lib/libgtest.a)
set(GTEST_MAIN_LIBRARIES
    ${OPENSOURCE_INSTALL_DIR}/googletest/lib/libgtest_main.a)
set(GMOCK_LIBRARIES
    ${OPENSOURCE_INSTALL_DIR}/googletest/lib/libgmock.a)
set(GMOCK_MAIN_LIBRARIES
    ${OPENSOURCE_INSTALL_DIR}/googletest/lib/libgmock_main.a)

add_subdirectory(modules/module1)
add_subdirectory(test/module1)
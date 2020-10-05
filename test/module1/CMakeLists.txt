project(module1_test)

set(SRC
    ${CMAKE_CURRENT_LIST_DIR}/src/module1_test.cpp
    ${CMAKE_SOURCE_DIR}/modules/module1/src/module1_to_test1.cpp
)

add_executable(${PROJECT_NAME} ${SRC})

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${GTEST_INCLUDE_DIRS}
        ${CMAKE_SOURCE_DIR}/modules/module1/src
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        ${GTEST_LIBRARIES}
        ${GTEST_MAIN_LIBRARIES}
        ${GMOCK_LIBRARIES}
        ${GMOCK_MAIN_LIBRARIES}
        Threads::Threads
)

gtest_add_tests(${PROJECT_NAME} "" AUTO)

add_dependencies(${PROJECT_NAME} googletest)
project(module1_test)

set(SRC
    ${CMAKE_CURRENT_LIST_DIR}/src/module1_test.cpp
    ${CMAKE_SOURCE_DIR}/modules/module1/src/module1_to_test1.cpp
    )

add_executable(${PROJECT_NAME}
    ${SRC}
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_SOURCE_DIR}/modules/module1/src
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        GTest::GTest
        GTest::Main
)

gtest_add_tests(TARGET ${PROJECT_NAME}
    SOURCES ${SRC}
)

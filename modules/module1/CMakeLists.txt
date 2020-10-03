project(module1)

set(SRC
    ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/src/module1_to_test1.cpp
)

add_executable(${PROJECT_NAME}
    ${SRC}
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_SOURCE_DIR}/modules/module1/src
)
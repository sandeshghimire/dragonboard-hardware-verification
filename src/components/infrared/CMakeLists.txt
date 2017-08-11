project(infrared)
cmake_minimum_required(VERSION 3.3)

list(
        APPEND HEADER_FILES
        eva_ir_hw_max610.h
)

list(
        APPEND SOURCE_FILES
        uart_test.c
)

set(ALL_SOURCE_FILES ${HEADER_FILES} ${SOURCE_FILES})

source_group(${PROJECT_NAME} FILES ${ALL_SOURCE_FILES})

add_library(${PROJECT_NAME} ${PLATFORM_LIBRARY_TYPE} ${ALL_SOURCE_FILES})

add_executable(infraredTest infrared_test.c)
target_link_libraries(infraredTest infrared)
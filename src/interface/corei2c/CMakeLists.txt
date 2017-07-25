set(CMAKE_XCODE_ORGANIZATIONNAME "EVA Automation, Inc.")
project(corei2c)
cmake_minimum_required(VERSION 3.3)

list(
    APPEND HEADER_FILES
        core_i2c.hpp
)

list(
    APPEND SOURCE_FILES
        core_i2c.cpp
)

set(ALL_SOURCE_FILES ${HEADER_FILES} ${SOURCE_FILES})

source_group(${PROJECT_NAME} FILES ${ALL_SOURCE_FILES})

add_library(${PROJECT_NAME} ${PLATFORM_LIBRARY_TYPE} ${ALL_SOURCE_FILES})
add_executable(testi2c ${ALL_SOURCE_FILES} main.cpp)


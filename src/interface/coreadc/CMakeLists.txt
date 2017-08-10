roject(coreadc)
cmake_minimum_required(VERSION 3.3)

list(
        APPEND HEADER_FILES
        core_adc.hpp
)

list(
        APPEND SOURCE_FILES
        core_adc.cpp
)

set(ALL_SOURCE_FILES ${HEADER_FILES} ${SOURCE_FILES})
source_group(${PROJECT_NAME} FILES ${ALL_SOURCE_FILES})
add_library(${PROJECT_NAME} ${PLATFORM_LIBRARY_TYPE} ${ALL_SOURCE_FILES})


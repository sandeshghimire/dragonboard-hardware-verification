set(SOURCE_FILES main.cpp )
add_executable(hardwareVerification ${SOURCE_FILES})
target_link_libraries(hardwareVerification menu coreadc)

add_executable(gpioTest gpioTest.cpp)
target_link_libraries(gpioTest coregpio)

add_executable(spiTest spiTest.cpp)
target_link_libraries(spiTest corespi)

add_executable(axlTest digital_ambient_light_sensor_test.cpp)
target_link_libraries(axlTest axl corei2c)
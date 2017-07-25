add_executable(gpioTest gpioTest.cpp)
target_link_libraries(gpioTest coregpio)

add_executable(spiTest spiTest.cpp)
target_link_libraries(spiTest corespi)
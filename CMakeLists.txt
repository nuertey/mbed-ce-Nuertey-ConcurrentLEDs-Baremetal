cmake_minimum_required(VERSION 3.19)
cmake_policy(VERSION 3.19)

set(MBED_APP_JSON_PATH mbed_app.json5)

include(mbed-os/tools/cmake/app.cmake)

add_subdirectory(mbed-os)

project(ConcurrentLEDs-Baremetal) # here you can change your project name

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} mbed-baremetal) # Can also link to mbed-baremetal here
mbed_set_post_build(${CMAKE_PROJECT_NAME})

mbed_finalize_build()

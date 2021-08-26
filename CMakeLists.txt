cmake_minimum_required(VERSION 3.14.0)
project(calibration)

add_subdirectory(tests)

file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS src/*.hpp)

add_executable(calibrate_app ${SOURCES} ${HEADERS})
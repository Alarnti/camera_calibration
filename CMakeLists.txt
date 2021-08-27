cmake_minimum_required(VERSION 3.14.0)
project(calibration)

add_subdirectory(tests)

file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS src/*.hpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(calibrate_app ${SOURCES} ${HEADERS})
target_link_libraries(calibrate_app ${OpenCV_LIBS})
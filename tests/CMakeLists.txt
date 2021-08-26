cmake_minimum_required(VERSION 3.14.0)

project(testing)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.13.1)

FetchContent_MakeAvailable(Catch2)

file(GLOB TEST_SOURCES *.cpp)

add_executable(testing ${TEST_SOURCES} ${catch2_SOURCE_DIR})
target_link_libraries(testing PRIVATE Catch2::Catch2)

# include(${CMAKE_BINARY_DIR}/_deps/catch2-src/contrib/Catch.cmake)
# include(${CMAKE_BINARY_DIR}/_deps/catch2-src/contrib/ParseAndAddCatchTests.cmake)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/contrib)
include(Catch)
include(CTest)
catch_discover_tests(testing)
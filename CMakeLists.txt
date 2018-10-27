cmake_minimum_required(VERSION 3.4)

project(AdvancedMath)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED 1)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)

IF (NOT TARGET gtest)
# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(libs/googletest)
ENDIF()

set(TEST_NAME Complex_UnitTest)

add_library(${PROJECT_NAME} STATIC
    complex.cpp
    complex.h
)

add_executable(${TEST_NAME} complex_unittests.cpp)
target_link_libraries(${TEST_NAME} gtest gtest_main ${PROJECT_NAME})

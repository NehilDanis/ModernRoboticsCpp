cmake_minimum_required(VERSION 3.20)

project(ModernRoboticsCpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(ModernRoboticsLib)
add_subdirectory(tests)
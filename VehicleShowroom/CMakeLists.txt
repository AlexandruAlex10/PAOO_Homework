cmake_minimum_required(VERSION 3.0)

project(VehicleShowroom)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(vehicle)

add_executable(VehicleShowroom main.cpp)

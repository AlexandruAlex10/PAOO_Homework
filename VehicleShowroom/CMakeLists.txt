cmake_minimum_required(VERSION 3.0)

project(VehicleShowroom)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(vehicle)

add_executable(VehicleShowroom main.cpp)

target_link_libraries(VehicleShowroom PUBLIC vehicle)

target_include_directories(VehicleShowroom PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/vehicle")

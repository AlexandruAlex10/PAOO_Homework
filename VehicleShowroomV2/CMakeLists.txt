cmake_minimum_required(VERSION 3.0)

project(VehicleShowroom)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(vehicle)
add_subdirectory(car)
add_subdirectory(truck)

add_executable(VehicleShowroom main.cpp)

target_link_libraries(VehicleShowroom PUBLIC vehicle car truck)

cmake_minimum_required(VERSION 3.0)

project(VehicleShowroom)

add_executable(VehicleShowroom main.cpp)

add_subdirectory(vehicle)
add_subdirectory(car)
add_subdirectory(truck)
add_subdirectory(vehicletemplate)

target_link_libraries(VehicleShowroom
    PRIVATE Vehicle
    PRIVATE Car
    PRIVATE Truck
    PRIVATE VehicleTemplate
)

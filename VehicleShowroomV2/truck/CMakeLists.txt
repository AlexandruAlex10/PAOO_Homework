add_library(Truck Truck.cpp)

target_link_libraries(Truck PUBLIC Vehicle)

target_include_directories(Truck PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

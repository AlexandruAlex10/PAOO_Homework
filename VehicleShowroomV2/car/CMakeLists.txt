add_library(Car Car.cpp)

target_link_libraries(Car PUBLIC Vehicle)

target_include_directories(Car PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

#include <iostream>
#include "Vehicle.hpp"
#include <string.h>

using namespace std;

// the methods for class Vehicle

MyVehicle::Vehicle::Vehicle(const char *, const char *, int, int, int, int, int, int, int, char, float) {}

MyVehicle::Vehicle::Vehicle(const Vehicle &) {}

MyVehicle::Vehicle::Vehicle(Vehicle &&) {}

MyVehicle::Vehicle::~Vehicle() {}

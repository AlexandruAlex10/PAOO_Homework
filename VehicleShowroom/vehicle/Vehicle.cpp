#include <iostream>
#include "Vehicle.hpp"
#include <string.h>

using namespace std;

// the methods for class Vehicle

Vehicle::Vehicle() {
}

Vehicle::Vehicle(char* brand, char* model, int numberOfPlaces, int height, int width, int length, int trunkSpace, int weight, int horsePower, int maxSpeed, char consumptionType, float consumption) {
    strncpy(this->brand, brand, 10);
    strncpy(this->model, model, 20);
    this->numberOfPlaces = numberOfPlaces;
    this->height = height;
    this->width = width;
    this->length = length;
    this->trunkSpace = trunkSpace;
    this->weight = weight;
    this->horsePower = horsePower;
    this->maxSpeed = maxSpeed;
    this->consumptionType = consumptionType;
    this->consumption = consumption;
}

void Vehicle::print() const {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Number of places: " << numberOfPlaces << endl;
    cout << "Height (mm): " << height << endl;
    cout << "Width (mm): " << width << endl;
    cout << "Length (mm): " << length << endl;
    cout << "Trunk Space (l): " << trunkSpace << endl;
    cout << "Weight (kg): " << weight << endl;
    cout << "Horsepower (HP): " << horsePower << endl;
    cout << "Max Speed (km/h): " << maxSpeed << endl;
    cout << "Consumption Type: " << consumptionType << endl;
    cout << "Consumption (l/100km): " << consumption << endl;
}

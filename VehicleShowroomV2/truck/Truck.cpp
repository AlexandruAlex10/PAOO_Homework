#include <iostream>
#include "Vehicle.hpp"
#include <string.h>

using namespace std;

// the methods for class Truck

MyVehicle::Truck::Truck(const char* _brand, const char* _model, int _numberOfPlaces, int _height, int _width, int _length, int _weight, int _horsePower, int _maxSpeed, char _consumptionType, float _consumption)
    : MyVehicle::Vehicle::Vehicle(_brand, _model, _numberOfPlaces, _height, _width, _length, _weight, _horsePower, _maxSpeed, _consumptionType, _consumption) {
    type = new char[15];
    strcpy(type, "Truck");
    brand = new char[strlen(_brand) + 1];
    strcpy(brand, _brand);
    model = new char[strlen(_model) + 1];
    strcpy(model, _model);
    this->numberOfPlaces = _numberOfPlaces;
    this->height = _height;
    this->width = _width;
    this->length = _length;
    this->weight = _weight;
    this->horsePower = _horsePower;
    this->maxSpeed = _maxSpeed;
    this->consumptionType = _consumptionType;
    this->consumption = _consumption;
}

MyVehicle::Truck::Truck(const Truck& other) 
    : MyVehicle::Vehicle::Vehicle(other){
    type = new char[15];
    strcpy(type, "Truck");
    brand = new char[strlen(other.brand) + 1];
    strcpy(brand, other.brand);
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);
    numberOfPlaces = other.numberOfPlaces;
    height = other.height;
    width = other.width;
    length = other.length;
    weight = other.weight;
    horsePower = other.horsePower;
    maxSpeed = other.maxSpeed;
    consumptionType = other.consumptionType;
    consumption = other.consumption;
}

MyVehicle::Truck::Truck(Truck&& other) 
    : MyVehicle::Vehicle::Vehicle(other){
    type = other.type;
    brand = other.brand;
    model = other.model;
    numberOfPlaces = other.numberOfPlaces;
    length = other.length;
    width = other.width;
    height = other.height;
    weight = other.weight;
    horsePower = other.horsePower;
    maxSpeed = other.maxSpeed;
    consumptionType = other.consumptionType;
    consumption = other.consumption;

    other.type = NULL;
    other.brand = NULL;
    other.model = NULL;
}

MyVehicle::Truck& MyVehicle::Truck::operator=(const Truck& other) {
    // first of all, deallocate all attributes that have been previously allocated dinamically
    delete[] type;
    delete[] brand;
    delete[] model;

    // allocate a different zone of memory for attributes that have been allocated dinamically
    type = new char[15];
    strcpy(type, "Truck");
    brand = new char[strlen(other.brand) + 1];
    strcpy(brand, other.brand);
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);

    // copy other attributes
    numberOfPlaces = other.numberOfPlaces;
    height = other.height;
    width = other.width;
    length = other.length;
    weight = other.weight;
    horsePower = other.horsePower;
    maxSpeed = other.maxSpeed;
    consumptionType = other.consumptionType;
    consumption = other.consumption;

    // return the object that was built, using 'this
    return *this;
}

MyVehicle::Truck::~Truck()
{
    delete[] type;
    delete[] brand;
    delete[] model;
}

void MyVehicle::Truck::print() const{
    cout << "Type: " << type << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Number of places: " << numberOfPlaces << endl;
    cout << "Height (mm): " << height << endl;
    cout << "Width (mm): " << width << endl;
    cout << "Length (mm): " << length << endl;
    cout << "Weight (kg): " << weight << endl;
    cout << "Horsepower (HP): " << horsePower << endl;
    cout << "Max Speed (km/h): " << maxSpeed << endl;
    cout << "Consumption Type: " << consumptionType << endl;
    cout << "Consumption (l/100km): " << consumption << endl;
}
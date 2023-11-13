#include <iostream>
#include "VehicleTemplate.hpp"
#include <string.h>

using namespace std;

// the methods for class VehicleTemplate

template <typename T>
VehicleTemplate<T>::VehicleTemplate(T _type, T _brand, T _model) :
    type(_type), brand(_brand), model(_model) {}

template <typename T>
void VehicleTemplate<T>::print() const{
    cout << "Type: " << type << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
}
#pragma once //include this header only once

// Vehicle class represents a auto vehicle with all its specifications

class Vehicle {
    // the attributes are private to take care of incapsulation principle
    private:
        // name
        char brand[10];
        char model[20];

        // dimensions and weight
        int numberOfPlaces;
        int length; // in mm
        int width; // in mm
        int height; // in mm
        int trunkSpace; // in l
        int weight; // in kg

        // performance
        int horsePower; // in HP
        int maxSpeed; // in km/h

        // Consumption
        char consumptionType; //diesel or petrol
        float consumption; // how much diesel or pretrol in liters is consumed in 100 km
    
    public:
        // the default constructor creates an empty instance for the class Vehicle
        Vehicle();

        // this constructor creates an instance for the class Vehicle
        Vehicle(char*, char*, int, int, int, int, int, int, int, int, char, float);

        // prints the given instance of a vehicle
        void print() const;
};
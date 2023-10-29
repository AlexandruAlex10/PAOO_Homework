#pragma once //include this header only once

// Vehicle class represents a auto vehicle with all its specifications

class Vehicle {
    // the attributes are private to take care of incapsulation principle
    private:
        // name
        char* brand; // pointer that points to a string
        char* model; // pointer that points to a string

        // dimensions and weight
        int numberOfPlaces;
        int length; // in mm
        int width; // in mm
        int height; // in mm
        int trunkCapacity; // in l
        int weight; // in kg

        // performance
        int horsePower; // in HP
        int maxSpeed; // in km/h

        // Consumption
        char consumptionType; //diesel or petrol
        float consumption; // diesel or petrol consumption in liters per 100 km
    
    public:

        // the constructor creates an instance for the class Vehicle
        Vehicle(const char*, const char*, int, int, int, int, int, int, int, int, char, float);

        // the copy constructor pretty much duplicates the instance given as parameter
        Vehicle(const Vehicle&);

        /* overloading '=' operator to do the same thing as the copy constructor (create deep copy)
        instead of a shallow copy */
        //Vehicle operator=(const Vehicle&);

        // the destructor frees up memory to prevent memory leaks
        ~Vehicle();

        // prints the given instance of a vehicle
        void print() const;
};
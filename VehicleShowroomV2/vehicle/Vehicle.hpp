namespace MyVehicle {
    
    // Vehicle class represents an auto vehicle with all its specifications (abstract class)
    
    class Vehicle {
    protected:
            // type
            char *type; // type of vehicle 

            // name
            char* brand; // pointer that points to a string
            char* model; // pointer that points to a string

            // dimensions and weight
            int numberOfPlaces;
            int length; // in mm
            int width; // in mm
            int height; // in mm
            int weight; // in kg

            // performancep
            int horsePower; // in HP
            int maxSpeed; // in km/h

            // Consumption
            char consumptionType; //diesel or petrol
            float consumption; // diesel or petrol consumption in liters per 100 km

    public:
        // the constructor creates an instance for the class vehicle
        Vehicle(const char*, const char*, int, int, int, int, int, int, int, char, float);

        // the copy constructor pretty much duplicates the instance given as parameter
        Vehicle(const Vehicle&);

        // the move constructor moves the information from an object to another
        Vehicle(Vehicle&&);

        // virtual destructor
        virtual ~Vehicle();

        // prints the given instance of a vehicle
        virtual void print() const = 0;
    };

    
    
    // Car class represents a car with all its specifications (inherits class Vehicle)

    class Car : public Vehicle{
        protected:
            int trunkCapacity; // in l

        public:
            // the constructor creates an instance for the class car
            Car(const char*, const char*, int, int, int, int, int, int, int, int, char, float);

            // the copy constructor pretty much duplicates the instance given as parameter
            Car(const Car&);

            // the move constructor moves the information from an object to another
            Car(Car&&);

            /* overloading '=' operator to do the same thing as the copy constructor (create deep copy)
            instead of a shallow copy */
            Car& operator=(const Car& other);

            // the destructor frees up memory to prevent memory leaks
            ~Car();

            // prints the given instance of a car
            void print() const;
    };

    
    
    // Truck class represents a truck with all its specifications (inherits class Vehicle)

    class Truck : public Vehicle{
        public:
            // the constructor creates an instance for the class truck
            Truck(const char*, const char*, int, int, int, int, int, int, int, char, float);

            // the copy constructor pretty much duplicates the instance given as parameter
            Truck(const Truck&);

            // the move constructor moves the information from an object to another
            Truck(Truck&&);

            /* overloading '=' operator to do the same thing as the copy constructor (create deep copy)
            instead of a shallow copy */
            Truck& operator=(const Truck& other);

            // the destructor frees up memory to prevent memory leaks
            ~Truck();

            // prints the given instance of a truck
            void print() const;
    };

}

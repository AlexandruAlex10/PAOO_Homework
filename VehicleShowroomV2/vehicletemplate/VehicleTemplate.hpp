template <typename T>
class VehicleTemplate {
public:
    // type
    T type; // type of vehicle

    // name
    T brand; // pointer that points to a string
    T model; // pointer that points to a string

public:
    // the constructor creates an instance for the class vehicle
    VehicleTemplate(T, T, T);

    // prints the given instance of a vehicle template
    void print() const;
};

// template function to compare two instances of VehicleTemplate
template <typename T>
// return true if equal, false if not
bool compareVehicles(const VehicleTemplate<T>& vehicle1, const VehicleTemplate<T>& vehicle2) {
    return (vehicle1.brand == vehicle2.brand) && (vehicle1.model == vehicle2.model);
}

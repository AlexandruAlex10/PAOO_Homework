#include <iostream>
#include "vehicle/Vehicle.hpp"
#include "vehicletemplate/VehicleTemplate.cpp"
#include <vector>
#include <string.h>

using namespace std;

int main(){

    int option = 0;

    cout << "Option '1': Constructor, Destructor, Copy Constructor, Overloaded Assignment Operator." << endl;
    cout << "Option '2': Move Constructor, Inheritance." << endl;
    cout << "Option '3': Vector, Template Class and Function, Unique and Share Pointer." << endl;
    cout << endl << "Choose functionalities option:";
    cin >> option;
    switch(option) {
        case 1: {

            MyVehicle::Car c1("Volvo", "S60", 5, 4778, 1850, 1426, 391, 2039, 455, 180, 'P', 6.2);
            MyVehicle::Car c3("Volvo", "S90", 5, 4969, 1879, 1436, 431, 2119, 455, 180, 'P', 6.5);

            cout << "C1 AFTER CALLING CONSTRUCTOR" << endl;
            c1.print();
            cout << endl;

            MyVehicle::Car c2 = c1;
            
            cout << "C2 AFTER CALLING COPY CONSTRUCTOR" << endl;
            c2.print();
            cout << endl;
            
            cout << "C3 AFTER CALLING CONSTRUCTOR" << endl;
            c3.print();
            cout << endl;
            c2 = c3; // c2 should have the contents of c3
            cout << "C2 AFTER USING OVERLOADED ASSIGNMENT OPERATOR ON C3" << endl;
            c2.print();
            cout << endl;

            c1.~Car();
            cout << "C1 HAS BEEN ERASED" << endl;;
            cout << endl;
            // some fields from the instance have been deallocated from memory and are not longer present
            cout << "C2 AFTER CALLING DESTRUCTOR UPON C1" << endl;
            c2.print();
            cout << endl;
            // this instance remains untouched from the effects of the destructor, that means the refferences between v1 and v2 are not the same
            
            // calling destructor again to check if c2 is a deep or shallow copy of c3    
            c3.~Car();
            cout << "C3 HAS BEEN ERASED" << endl;
            cout << endl;
            cout << "C2 AFTER CALLING DESTRUCTOR UPON C3" << endl;
            c2.print();
            cout << endl;
            // without overloading '=' operator, we get a shallow copy (same reference) with overloading '=' operator, we basically create a deep copy (just like with copy constructor) if not overload, C2 will have some of its content absent otherwise, the content will still be there
        }

        case 2: {
            
            MyVehicle::Car c1("Volvo", "S60", 5, 4778, 1850, 1426, 391, 2039, 455, 180, 'P', 6.2);
            MyVehicle::Truck t1("Volvo", "VNX", 2, 3689, 1646, 3850, 4781, 220, 120, 'D', 12.2);

            cout << "T1 AFTER CALLING CONSTRUCTOR" << endl;
            t1.print();
            cout << endl;

            MyVehicle::Car c2 = c1;
            cout<<"C2 BEFORE CALLING MOVE CONSTRUCTOR" << endl;
            c2.print();
            cout << endl;

            MyVehicle::Car c2_moved(std::move(c2));
            cout<<"C2_MOVED AFTER CALLING MOVE CONSTRUCTOR UPON C2" << endl;
            c2_moved.print();
            cout << endl;

            cout << "C2 AFTER CALLING MOVE CONSTRUCTOR" << endl;
            cout << "It won't show anything because C2 is uninitialized" << endl;
            c2.print();
        }

        case 3: {
            
            std::vector<MyVehicle::Vehicle*> vehicles;

            MyVehicle::Car c1("Volvo", "S60", 5, 4778, 1850, 1426, 391, 2039, 455, 180, 'P', 6.2);
            MyVehicle::Car c3("Volvo", "S90", 5, 4969, 1879, 1436, 431, 2119, 455, 180, 'P', 6.5);
            
            vehicles.push_back(&c1);
            vehicles.push_back(&c3);

            cout << "UNTIL NOW, YOU HAVE CREATED " << vehicles.size() << " 2 CAR OBJECTS." << endl;
            cout << endl;

            VehicleTemplate<string> vt1("Car", "Volvo", "S60");
            VehicleTemplate<string> vt2("Truck", "Volvo", "VNX");
            VehicleTemplate<string> vt3("Car", "Volvo", "S60");

            cout << "VT1 AFTER CALLING CONSTRUCTOR" << endl;
            vt1.print();
            cout << endl;
            
            cout << "VT2 AFTER CALLING CONSTRUCTOR" << endl;
            vt2.print();
            cout << endl;

            cout << "VT3 AFTER CALLING CONSTRUCTOR" << endl;
            vt3.print();
            cout << endl;
            
            // compare the vehicles and print the result
            bool areEqual = compareVehicles(vt1, vt2);
            if (areEqual) {
                cout << endl << "The vehicles are the same." << endl;
            } else {
                cout << endl <<"The vehicles are not the same." << endl;
            }

            areEqual = compareVehicles(vt1, vt3);
            if (areEqual) {
                cout << endl << "The vehicles are the same." << endl;
            } else {
                cout << endl <<"The vehicles are not the same." << endl;
            }
        }
    }

    return 0;
}

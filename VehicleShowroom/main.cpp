#include <iostream>
#include "Vehicle.hpp"

using namespace std;

int main(){
    MyVehicleShowroom::Car c1("Volvo", "S60", 5, 4778, 1850, 1426, 391, 2039, 455, 180, 'P', 6.2);

    cout << "C1 AFTER CALLING CONSTRUCTOR" << endl;
    c1.print();
    cout << endl;

    MyVehicleShowroom::Car c2 = c1;

    cout << "C2 AFTER CALLING COPY CONSTRUCTOR" << endl;
    c2.print();
    cout << endl;

    c1.~Car();
    cout << "C1 AFTER CALLING DESTRUCTOR UPON C1" << endl;
    c1.print();
    cout << endl;
    // some fields from the instance have been deallocated from memory and are not longer present
    cout << "C2 AFTER CALLING DESTRUCTOR UPON C1" << endl;
    c2.print();
    cout << endl;
    // this instance remains untouched from the effects of the destructor, that means the refferences between v1 and v2 are not the same

    MyVehicleShowroom::Car c3("Volvo", "S90", 5, 4969, 1879, 1436, 431, 2119, 455, 180, 'P', 6.5);
    
    cout << "C3 AFTER CALLING CONSTRUCTOR" << endl;
    c3.print();
    cout << endl;
    c2 = c3; // c2 should have the contents of c3
    cout << "C2 AFTER USING OVERLOADED ASSIGNMENT OPERATOR ON C3" << endl;
    c2.print();
    cout << endl;

    // calling destructor again to check if c2 is a deep or shallow copy of c3
    cout << "C3 AFTER CALLING DESTRUCTOR UPON C3" << endl;
    c3.~Car();
    c3.print();
    cout << endl;
    cout << "C2 AFTER CALLING DESTRUCTOR UPON C3" << endl;
    c2.print();
    cout << endl;
    // without overloading '=' operator, we get a shallow copy (same reference) with overloading '=' operator, we basically create a deep copy (just like with copy constructor) if not overload, C2 will have some of its content absent otherwise, the content will still be there

    cout<<"C2 BEFORE CALLING MOVE CONSTRUCTOR" << endl;
    c2.print();
    cout << endl;

    MyVehicleShowroom::Car c2_moved(std::move(c2));

    cout<<"C2_MOVED AFTER CALLING MOVE CONSTRUCTOR UPON C2" << endl;
    c2_moved.print();
    cout << endl;

    cout << "C2 AFTER CALLING MOVE CONSTRUCTOR" << endl;
    cout << "It won't show anything because C2 is uninitialized" << endl;
    c2.print();
    cout << endl;

    return 0;
}

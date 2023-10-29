#include <iostream>
#include "./vehicle/Vehicle.hpp"

using namespace std;

int main(){
    // New Instance for class Vehicle
    // Call constructor
    Vehicle v1("Volvo", "S90", 5, 4969, 1879, 1436, 431, 2119, 455, 180, 'P', 6.5);
    
    cout<<"VEHICLE 1 AFTER CALLING CONSTRUCTOR"<<endl;
    v1.print();
    cout<<endl;

    // Call copy constructor
    Vehicle v2 = v1;

    cout<<"VEHICLE 2 AFTER CALLING COPY CONSTRUCTOR"<<endl;
    v2.print();
    cout<<endl;

    // Call destructor
    v1.~Vehicle();

    // Print the instance again
    cout<<"VEHICLE 1 AFTER CALLING DESTRUCTOR"<<endl;
    // some fields from the instance have been deallocated from memory and are not longer present
    v1.print();
    cout<<endl;
    cout<<"VEHICLE 2 AFTER CALLING DESTRUCTOR"<<endl;
    v2.print();
    /* this instance remains untouched from the effects of the destructor, 
    that means the refferences between v1 and v2 are not the same */
    cout<<endl;

    // without overloading '=' operator, we get a shallow copy (same reference)
    // with overloading '=' operator, we basically create a deep copy (just like with copy constructor)

    

    return 0;
}


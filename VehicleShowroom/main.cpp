#include <iostream>
#include "Vehicle.hpp"

using namespace std;

int main(){
    // call constructor
    MyVehicleShowroom::Vehicle v1("Volvo", "S60", 5, 4778, 1850, 1426, 391, 2039, 455, 180, 'P', 6.2);

    cout<<"V1 AFTER CALLING CONSTRUCTOR"<<endl;
    v1.print();
    cout<<endl;

    // call copy constructor
    MyVehicleShowroom::Vehicle v2 = v1;
    cout<<"V2 AFTER CALLING COPY CONSTRUCTOR"<<endl;
    v2.print();
    cout<<endl;

    // call destructor
    v1.~Vehicle();

    // print the instance again
    cout<<"V1 AFTER CALLING DESTRUCTOR UPON V1"<<endl;
    // some fields from the instance have been deallocated from memory and are not longer present
    v1.print();
    cout<<endl;
    cout<<"V2 AFTER CALLING DESTRUCTOR UPON V1"<<endl;
    v2.print();
    // this instance remains untouched from the effects of the destructor, that means the refferences between v1 and v2 are not the same
    cout<<endl;

    MyVehicleShowroom::Vehicle v3("Volvo", "S90", 5, 4969, 1879, 1436, 431, 2119, 455, 180, 'P', 6.5);
    cout<<"V3 AFTER CALLING CONSTRUCTOR"<<endl;
    v3.print();
    cout<<endl;
    v2 = v3; // v2 should have the contents of v3
    cout<<"V2 AFTER USING OVERLOADED ASSIGNMENT OPERATOR ON V3"<<endl;
    v2.print();
    cout<<endl;

    // calling destructor again to check if v2 is a deep or shallow copy of v3
    v3.~Vehicle();
    cout<<"V2 AFTER CALLING DESTRUCTOR UPON V3"<<endl;
    v2.print();
    // without overloading '=' operator, we get a shallow copy (same reference)
    // with overloading '=' operator, we basically create a deep copy (just like with copy constructor)
    cout<<endl;
    // if not overload, V2 will have some of its content absent otherwise, the content will still be there

    cout<<"V2 BEFORE CALLING MOVE CONSTRUCTOR"<<endl;
    v2.print();
    cout<<endl;

    // call move constructor
    MyVehicleShowroom::Vehicle v2_moved(std::move(v2));

    cout<<"V2_MOVED AFTER CALLING MOVE CONSTRUCTOR UPON V2"<<endl;
    v2_moved.print();
    cout<<endl;

    cout<<"V2 AFTER CALLING MOVE CONSTRUCTOR"<<endl;
    cout<<"It won't show anything because V2 is uninitialized"<<endl;
    v2.print();
    cout<<endl;

    return 0;
}

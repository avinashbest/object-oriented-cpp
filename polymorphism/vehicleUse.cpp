//Method Overidding
#include <iostream>
using namespace std;
#include "vehicle.cpp"
#include "car.cpp"

int main()
{
    vehicle v; //error => abstract class
    car c;

    v.print(); //Vehicle class print()

    c.print(); //Car class print()

    vehicle *v1 = new vehicle; //error => abstract class

    vehicle *v2;
    //v2 = &v;

    v2 = &c; //base class pointer pointing to derived class object

    v1->print();
    v2->print();

    return 0;
}
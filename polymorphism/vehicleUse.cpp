//Method Overidding
#include <iostream>
using namespace std;
#include "vehicle.cpp"
#include "car.cpp"

int main()
{
    vehicle v;
    car c;

    v.print(); //Vehicle class print()

    c.print(); //Car class print()

    return 0;
}
#include <iostream>
#include "dynamicArray.cpp"
using namespace std;

int main()
{
    dynamicArray d1;
    //Adding Element
    d1.addElement(10);
    d1.addElement(20);
    d1.addElement(30);
    d1.addElement(40);
    d1.addElement(50);
    d1.addElement(60);
    d1.addElement(70);
    d1.addElement(80);
    d1.addElement(90);
    d1.addElement(100);
    d1.addElement(110);
    d1.addElement(120);
    d1.addElement(130);
    //Printing the array element
    d1.print();
    //Creating a new object of dynamicArray class
    dynamicArray d2(d1); //Default copy constructor => shallow copy

    d1.addElement(0, 100);

    d2.print();

    dynamicArray d3;
    d3 = d1;

    d3.print();
    return 0;
}
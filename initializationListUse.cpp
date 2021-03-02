#include <iostream>
#include "initializationList.cpp"
using namespace std;

int main()
{
    student s1(21, 191041);
    s1.age = 20;

    s1.display();

    return 0;
}
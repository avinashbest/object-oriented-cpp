#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{
    student s1;

    student *s2 = new student;

    s1.setAge(20, 1234);
    s2->setAge(24, 1234);

    s1.display();
    s2->display();

    student s4(191041);
    s4.display();

    student s5(1651, 165);
    s5.display();

    return 0;
}

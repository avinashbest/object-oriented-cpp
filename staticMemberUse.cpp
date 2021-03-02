#include <iostream>
#include "staticMember.cpp"
using namespace std;

int main()
{
    student s1;

    // cout << s1.rollNo << " " << s1.age << endl;

    //ILLOGICAL
    // cout << s1.totalStudents << endl;
    // s1.totalStudents = 20;
    // student s2;
    // cout << s2.totalStudents << endl;

    student s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12;

    // cout << student::totalStudents << endl;
    cout << student::getTotalStudent() << endl;

    return 0;
}
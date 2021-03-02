#include<iostream>
#include"student.cpp"
using namespace std;

int main()
{
	student s1; // #1 Constructor

	student s2(101); // #2 Constructor

	student s3(20,102); // #3 Constructor

	student s4(s3); // Copy Constructor

	s1 = s2; // Copy Assignment Constructor

	student s5 = s4; //Copy Constructor
	/*
	Compiler interpretes it as Copy Constructor
	student s5(s4);
	*/

	return 0;
}

#include <iostream>
using namespace std;
#include "student.cpp"

int main()
{
	//Creating object statically
	student s1;
	student s2;

	student s3, s4, s5;

	// s1.age = 24;
	s1.rollNumber = 101;

	s1.display();
	s2.display();

	cout << "S1 Age: " << s1.getAge() << endl;
	cout << "S1 Roll No:" << s1.rollNumber << endl;

	//Creating object dynamically
	student *s6 = new student;

	cout << "S6 age: " << s6->getAge() << endl;

	// s6->age = 23;		  //(*s6).age = 23;
	s6->rollNumber = 104; //(*s6).rollNumber = 104;
	s6->display();		  //(*s6).display();

	return 0;
}

#include <iostream>
#include <cstring>
#include "Student.cpp"
using namespace std;
//Shallow Copy & Deep Copy
int main()
{
	char name[] = "avinash";
	Student s1(21, name);
	s1.display();

	Student s2(s1);

	s2.name[0] = 'x';

	s1.display();
	s2.display();

	// name[6] = 'a';
	// Student s2(20, name);
	// s2.display();

	// s1.display();

	return 0;
}

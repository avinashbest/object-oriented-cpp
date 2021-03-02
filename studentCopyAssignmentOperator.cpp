#include<iostream>
#include"student.cpp"
using namespace std;

int main()
{
	student s1(10, 1001);
	student s2(20, 2001);
	
	student *s3 = new student(30, 3001);

	s2 = s1;

	*s3 = s1;

	s2 = *s3;

	delete s3;

	return 0;
}

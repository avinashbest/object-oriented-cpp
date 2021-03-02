class Student
{
	int age;

public:
	char *name;
	// Constructor
	Student(int age, char *name)
	{
		this->age = age;
		//Shallow Copy: Rather than copying entire array => copy only base address of the array
		//this->name = name;

		//Deep Copy
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	//Copy Constructor
	Student(Student const &s)
	{
		this->age = s.age;
		// this->name = s.name; //Shallow Copy
		//Deep Copy
		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
	}
	void display()
	{
		std::cout << "Age: " << age << " Name: " << name << std::endl;
	}
};

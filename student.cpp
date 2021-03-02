class student
{
public:
	int rollNumber;

private:
	int age;

public:
	//Default Constructor
	student()
	{
		std::cout << "#1-Constructor Called...!" << std::endl;
	}
	//Parameterized Constructor
	student(int rollNumber)
	{
		std::cout << "#2-Constructor Called...!" << std::endl;
		this->rollNumber = rollNumber;
	}

	student(int rollNumber, int age)
	{
		std::cout << "#3-Constructor Called...!" << std::endl;
		this->rollNumber = rollNumber;
		this->age = age;
	}
	//Destructor
	~student()
	{
		std::cout<<"#1-Destructor Called...!"<<std::endl;
	}

	//Member Functions
	void display()
	{
		std::cout << "Age = " << age << " "
				  << "Roll No: " << rollNumber << std::endl;
	}
	//Getters: Used to get the private values
	int getAge()
	{
		return age;
	}
	//Setters: Used to set/change/update any private values
	void setAge(int a, int password)
	{
		//if password doesn't match we simply return
		if (password != 1234)
		{
			return;
		}
		//if value of 'a' would be negative we are returning
		if (a < 0)
		{
			return;
		}
		age = a;
	}
};

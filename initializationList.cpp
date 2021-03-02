class student
{
public:
    int age;
    const int rollNo;
    int &ageReference;

    //Constructor for Initialization list
    student(int age, int rollNo) : age(age), rollNo(rollNo), ageReference(this->age) // const int rollNo = r
    {
        // rollNo = r;
    }
    void display()
    {
        std::cout << "Age: " << age << " Roll No: " << rollNo << std::endl;
    }
};
class student
{ 
    static int totalStudents; //Total number of students present
public:
    int rollNo;
    int age;
    //Constructor
    student()
    {
        totalStudents++;
    }
    int getRollNo()
    {
        return rollNo;
    }
    static int getTotalStudent()
    {
        return totalStudents;
    }
};

int student::totalStudents = 0; //initialize static data member
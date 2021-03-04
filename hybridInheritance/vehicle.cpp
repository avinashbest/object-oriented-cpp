class vehicle
{
private:
    int maxSpeed;

protected:
    int numTyres;

public:
    string color;

    vehicle()
    {
        cout << "Vehicle's class Default constructor." << endl;
    }
    vehicle(int z)
    {
        cout << "Vehicle's class Parameterized constructor." << endl;
    }
    ~vehicle()
    {
        cout << "Vehicle's class Default destructor." << endl;
    }
};
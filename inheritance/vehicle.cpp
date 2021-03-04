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
        cout << "\nVehicle's class Default constructor is called!" << endl;
    }
    ~vehicle()
    {
        cout << "Vehicle's class Default destructor is called!" << endl
             << endl;
    }
};
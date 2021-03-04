class car : virtual public vehicle
{
public:
    int numGears;
    car()
    {
        cout << "Car's class Default constructor" << endl;
    }
    // car(int x, int y) : vehicle(x)
    // {
    //     cout << "Car's  Parameterized Constructor" << endl;
    // }
    ~car()
    {
        cout << "Car's class Default destructor" << endl;
    }
    void print()
    {
        cout << "Num Tyres: " << numTyres << endl;
        cout << "Colors: " << color << endl;
        cout << "Num Gears: " << numGears << endl;
        // cout << "Max Speed: " << maxSpeed << endl; //!Cannot be inherited => private property
    }
};
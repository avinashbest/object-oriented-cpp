class car : public vehicle
{
public:
    int numGears;
    car()
    {
        cout << "\nCar's class Default constructor is called!" << endl;
    }
    ~car()
    {
        cout << "Car's class Default destructor is called!\n"
             << endl;
    }
    void print()
    {
        cout << "Num Tyres: " << numTyres << endl;
        cout << "Colors: " << color << endl;
        cout << "Num Gears: " << numGears << endl;
        // cout << "Max Speed: " << maxSpeed << endl; //!Cannot be inherited => private property
    }
};
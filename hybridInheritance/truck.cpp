class truck : virtual public vehicle
{
public:
    truck()
    {
        cout << "Truck's Constructor" << endl;
    }
    ~truck()
    {
        cout << "Truck's class Default destructor" << endl;
    }
};

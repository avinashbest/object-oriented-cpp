class bus : public car, public truck
{
public:
    bus()
    {
        cout << "Bus's Constructor" << endl;
    }
    ~bus()
    {
        cout<<"Bus's Destructor"<<endl;
    }
};

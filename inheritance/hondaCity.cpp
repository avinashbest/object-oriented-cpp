class hondaCity : public car
{
public:
    hondaCity()
    {
        cout << "\nHonda City's class Default constructor is called!" << endl;
    }
    ~hondaCity()
    {
        cout << "Honda City's class Default destructor is called!\n"
             << endl;
    }
};
class dynamicArray
{
    int *data;
    int nextIndex;
    int capacity; //total size of the array
public:
    //*Constructor
    dynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    //copy constructor
    dynamicArray(dynamicArray const &d)
    {
        // this->data = d.data; //*shallow copy
        //^deep copy
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }

        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }
    //Copy assignment operator= overload
    void operator=(dynamicArray const &d)
    {
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }
    //Add element to the dynamic array
    void addElement(int element)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int[2 * capacity];
            //*copying previous array to new array
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            delete[] data;  //^deallocating the previous allocated memory
            data = newData; //^now data is pointing to the newData
            capacity *= 2;  //^double the capacity
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    //Getter
    int getElement(int i) const
    {
        if (i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }
    //*Adding an element at a particular location
    void addElement(int i, int element)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            addElement(element);
        }
        else
        {
            return;
        }
    }
    //Utility function to print dynamic array
    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};
#include<iostream>

//generic getter and setter
template <class T>

class vehicle
{
    private:
        T num;
    
    public:
        void set (T data)
        {
            num = data;
        }

        T get ()
        {
            return num;
        }
};

int main (void)
{
    vehicle<int> v1;

    v1.set(10);
    std::cout << "get - int = " << v1.get() << std::endl;

    vehicle<std::string> vstr;

    vstr.set("i am Hero");
    std::cout << "get - str = " << vstr.get() << std::endl;


    return 0;
}




/*
//getter and setter
class vehicle
{
    private:
        int num;

    public:
        void set_num(int data)
        {
            num = data;
        }

        int get_num()
        {
            return num;
        }

};


int main (void)
{
    vehicle v1;

    v1.set_num(10);
    std::cout << v1.get_num();
    return 0;
}
*/


/*
template <class T>

class vehicle
{
    private:
    T data;

    public:

    void set_data(T val)
    {
        data = val;
    }

    T get_value()
    {
        return data;
    }
};



int main (void)
{
    vehicle<std::string> str;

    str.set_data("Hi i am Hero");
    std::cout << str.get_value() << std::endl;


    vehicle<int> v1;
    
    v1.set_data(10);
    std::cout << v1.get_value();

    return 0;
}

*/
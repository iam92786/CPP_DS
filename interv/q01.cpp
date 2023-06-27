#include<iostream>

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
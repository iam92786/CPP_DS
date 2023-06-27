//A Simple Template demo : C++ program that implements getter and setter functions using templates:

#include<iostream>

//template <typename T>  //this  declaration that introduces a template parameter T. 
template <class T>
// There is no functional difference between using class or typename in template declarations. They are essentially synonyms in this context.

/*
template : This keyword indicates the start of a template declaration
typename : keyword is used to indicate that T represents a type.
    Alternatively, you can also use the class keyword instead of typename
T: This is the name of the template parameter. (it can be any valid identifiefr).


*/

class property
{

    private :
        T value;

    public :
        void setvalue(T new_val)
        {
            value = new_val;
        }
    
        T getvalue()
        {
            return value;
        }
};



int main (void)
{
//same class work for datatype = int
    property<int> age;  //Property<int> is a specific instantiation of the Property class template with int as the template argument.
        //It means that age is an instance of the Property class specifically designed to work with int data type.

    age.setvalue(27);
    std::cout << "Age : " << age.getvalue() << std::endl;

//same class work for datatype = int
    property<std::string> str;
    str.setvalue("Arshad Birthday");
    std::cout << "Name = " << str.getvalue() << std::endl;


    return 0;
}
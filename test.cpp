using namespace std;
#include<iostream>

class Demo
{
    private:
    int n1;
    int n2;
    public:
    Demo()
    {
        cout<<"\n Parameterless constructor";
        this->n1=5;
        this->n2=5;
    }

    Demo(int n1,int n2)
    {
        cout<<"\n Paramatrized constructor";
        this->n1=n1;
        this->n2=n2;
    }

    // deallocate the memory occupied by object
    // Destructor
    ~Demo()
    {
        cout<<"\n inside destructor";
    }
    void disp()
    {
        cout<<"\n  N1 = "<<this->n1<<" N2 "<<this->n2;
    }
};



int main(void)
{
    Demo d1;
    Demo d2(40,45);
    d1.disp();
    d2.disp();

    return 0;
}


// Number of times destructor is called is equal to number 
//of objects created within main()`
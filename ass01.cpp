using namespace std;

#include<iostream>
/*
Virtual Pointer And Virtual Function
*/
class shape
{
public:
    virtual void draw()
    {
        cout << "base class :: shape\n";
    }
};

class circle : public shape
{
public:
    void draw()
    {
        cout << "derived class :: circle\n";
    }
};

class square : public shape
{
public:
    void draw()
    {
        cout << "derived class :: square\n";
    }
};




int main(void)
{
    shape* shapeptr;
    circle cl;
    square sq;

    shapeptr = &cl;
    shapeptr->draw();

    shapeptr = &sq;
    shapeptr->draw();

    return 0;
}



/*
OUTPUT:
PS C:\Users\asiddiqui\ars\cdac\Cpp> .\a.exe       
derived class :: circle
derived class :: square
*/
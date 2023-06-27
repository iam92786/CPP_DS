/*
Exercise:
Write a C++ program that uses an array to implement a simple stack data structure. The program should provide the following functionality:

    Push an element onto the stack.
    Pop an element from the stack.
    Display the elements currently present in the stack.
*/



#include<iostream>
#define MAX_SIZE 5

class stack
{
private:
    int top ;
    int arr[MAX_SIZE];

public:
    stack()
    {
        top = -1;
    }

    bool isStack_full()
    {
        if (top == (MAX_SIZE - 1))
            return true;
        else
            return false;
    }

    bool isStack_empty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    void stack_push(int element)
    {
        if(isStack_full())
            std::cout << "Can`t Push, Strack is Full !"<< std::endl;
        else
        {
            top++;
            arr[top] = element;
            std::cout << "Element pushed successfully.\n";
            std::cout << "Pushed element: " << arr[top] << "\n";
        }
    }
    void stack_pull()
    {
        if (isStack_empty())
        {
            std::cout << "Can`t Pull, Strack is Empty !"<< std::endl;
        }
        else
        {
            std::cout << "Popped element: " << arr[top] << "\n";
            top--;
        }
        
    }

    void display_stack()
    {
        if (isStack_empty())
        {
            std::cout << "Strack is Empty !"<< std::endl;
        }
        else
        {
            std::cout << "STACK DISPLAY\n";
            for (int i = 0; i < MAX_SIZE; i++)
            {
                std::cout << arr[i] << std::endl;
            }
        }
    }


};




int main (void)
{
    stack s1;

    //s1.display_stack();
    s1.stack_push(10);
    s1.stack_push(20);
    s1.stack_push(30);
    s1.stack_push(40);
    s1.stack_push(50);
    s1.stack_push(60);
    s1.display_stack();


    return 0;
}
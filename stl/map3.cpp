/*
Exercise:
Write a C++ program that uses a map to store the names of students as keys and their corresponding scores (integers) as values. 
The program should prompt the user to enter the names and scores of five students. 
Afterward, it should display the names and scores in alphabetical order.
*/

#include<iostream>
#include<map>



int main (void)
{
    //create map;
    std::map<std::string, int> student;

    std::map<std::string, int>::iterator it;
    it = student.begin();

    std::cout << "Enter the Name and Score of the Student" << std::endl;

    for (int i = 0; i < 5; i++)
    {

        std::cout << "Enter Student Name : " << std::endl;
        //std::cin >> it->first; 
        
        std::cout << "Enter Student score : " << std::endl;
    }
    



    return 0;
}
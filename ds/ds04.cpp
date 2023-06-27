/*
Question:
Write a program that takes an array of integers as input and finds the maximum and minimum elements in the array. 
        The program should display both the maximum and minimum values.

Example:
Input: [7, 3, 9, 2, 5]
Output:
Maximum: 9
Minimum: 2

Solution:
*/


#include<iostream>
#include<vector>

void findMinMax(std::vector<int> &arr,int &min,int &max)
{
    min = arr[0];
    max = arr[0];

    for (int i = 0 ; i < arr.size() ; i++)
    {
        //max
        if(max < arr[i] )
        {
            //swap
            max = arr[i];
        }

        //min
        if(min > arr[i])
        {
            //swap
            min = arr[i];
        }
    }
}

int main (void)
{
    std::vector<int> arr;
    int numelement, element, min, max;

    std::cout << "Enter number of element" << std::endl;
    std::cin >> numelement;

    std::cout << "Enter the element : " << std::endl;
    for (int i = 0; i < numelement; i++)
    {
        std::cin >> element;
        arr.push_back(element);
    }

    for(int i  = 0 ; i < arr.size(); i++)    //display all element
    {
        std::cout << arr[i] << " ";
    }

    findMinMax(arr, min, max);

    //display
    std::cout << "\nmax : " << max << std::endl;
    std::cout << "min : " << min << std::endl;

    
    return 0;
}
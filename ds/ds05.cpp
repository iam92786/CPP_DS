/*
Write a program that takes a array as input and counts the frequency of each numbers in the array. 
Display each unique number along with its frequency.

*/

#include<iostream>
#include<vector>
#include<unordered_map>


void countFreq(std::vector<int>& arr)
{
    std::unordered_map<int, int> numFreq;

    //count freq

    for (int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size(); i++)
        {
            if (arr[i] == arr[j])
            {
                numFreq[i]++;
            }
        }
    }

    for(auto& pair : numFreq)
    {
        std::cout << "Number : " << pair.first << ", Frequency : " << pair.second << std::endl;
    }


}

int main (void)
{
    std::vector<int> arr;
    int numEle, val;

    std::cout << "Enter a number of element : ";
    std::cin >> numEle;

    std::cout << "Enter a numbers : ";
    for(int i = 0; i < numEle; i++)
    {
        std::cin >> val;
        arr.push_back(val);

    }

    countFreq(arr);
    
    



    return 0;
}
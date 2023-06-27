/*
Here are some beginner-level practice questions related to C++ vectors:

    1. How do you declare a vector of integers named "numbers"?
    2. How do you add an element with the value 5 to the end of a vector?
    3. How do you access the third element of a vector named "data"?
    4. How do you find the number of elements in a vector named "values"?
    5. How do you remove the last element from a vector?
    6. How do you check if a vector is empty?
    7. How do you insert an element with the value 10 at the beginning of a vector?
    8. How do you sort the elements in a vector in ascending order?
    9. How do you clear all the elements from a vector?
    10. How do you iterate over a vector using a for loop?
*/

#include<iostream>
#include<vector>
#include<algorithm>





int main (void)
{
    //1. How do you declare a vector of integers named "numbers"?
    std::vector<int> v1;

    //2. How do you add an element with the value 5 to the end of a vector?
    v1.push_back(11);
    v1.push_back(22);
    v1.push_back(55);
    v1.push_back(44);
    v1.push_back(33);

    std::cout << "vector v1 front = " <<  v1.front() << std::endl;
    std::cout << "vector v1 back = " <<  v1.back() << std::endl;
    
    //3. How do you access the third element of a vector named "data"?
    std::cout << "vector v1 3rd element = " <<  v1.at(3) << std::endl;


    //4. How do you find the number of elements in a vector named "values"?
    std::cout << "vector v1 no of element = " <<  v1.size() << std::endl;

    //5. How do you remove the last element from a vector?
    v1.pop_back();
    std::cout << "vector v1 remove last element = " <<  v1.back() << std::endl;
    
    //6. How do you check if a vector is empty?
    std::cout << "vectro v1 is empty = " << v1.empty() << std::endl;
    
    //7. How do you insert an element with the value 10 at the beginning of a vector?
    v1.insert(v1.begin(),10);
    std::cout << "vectro v1 insert ele at begin = " << v1.front() << std::endl;
    std::cout << "vector v1 no of element = " <<  v1.size() << std::endl;

    //8. How do you sort the elements in a vector in ascending order?
    std::sort(v1.begin(), v1.end());
    std::cout << " After sorting vector !" << std::endl;

    //10. How do you iterate over a vector using a for loop?
    for (auto i = 0; i < v1.size(); i++)
    {
        std::cout << "v1["<< i << "] = " << v1.at(i) << std::endl;
    }
    
    //9. How do you clear all the elements from a vector?
    v1.clear();
    std::cout << "After v1.clear() = " <<  v1.size() << std::endl;


    
    return 0;
}
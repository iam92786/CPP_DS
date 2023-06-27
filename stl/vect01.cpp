//vector
#include<iostream>
#include<vector>




int main (void)
{
    std::vector<int> v1;

    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        std::cout << "size of v1 = " << v1.size() << std::endl;


    }

    //print the vector
    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << "vector = " << v1[i] << std::endl;
    }
    


    return 0;
}
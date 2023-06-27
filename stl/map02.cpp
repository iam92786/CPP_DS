#include<iostream>
#include<map>



int main (void)
{
    //Create STL map
    std::map<std::string, int> map1;

    //insert some value into map
    map1["one"] = 1;
    map1["two"] = 2;
    map1["three"] = 3;


    //Create iterator for smae above map
    std::map<std::string, int>::iterator it;

    //iterator it is pointing to the first lelment of map1
    it = map1.begin();


    while (it != map1.end())
    {
        std::cout << "Key = " << it->first << ", Value = " << it->second << std::endl;
        ++it;
    }
    

    return 0;
}
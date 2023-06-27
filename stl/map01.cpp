#include<iostream>
#include<map>



int main (void)
{
    //create map od string to int
    std::map<std::string, int> map1;

    //insert some value into map
    map1["one"] = 1;
    map1["two"] = 2;
    map1["three"] = 3;
 
//some basic function of map
    std::cout <<"size of map = " << map1.size() <<std::endl;
    // output is = 3

    
    return 0;
}
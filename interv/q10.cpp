/*
Draw pattern
*         * 

 *       *  

  *     *   

   *   *    

    * *     

     *      

    * *     

   *   *    

  *     *   

 *       *  

*         * 




*/

#include<iostream>

int main (void)
{
    int i,j;
    std::cout << "Arshad\n";

    for(i = 0; i < 11; i++)
    {
        for(j = 0; j < 11 ; j++)
        {
            std::cout << " "; 
            if((i == j) || (10-i == j))
            {
                std::cout << "*";
            }

        }
        std::cout << "\n";
    }


    return 0;
}
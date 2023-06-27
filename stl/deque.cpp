#include<iostream>
#include<deque>
#include<string>

void menu_lists(int);


int main (void)
{
    int choice;
    std::deque<std::string> tsskManager;
    std::string task_name;


    menu_lists();
    while (1)
    {
    
        switch (choice)
        {
            case 1: //ADD TASK
                
                break;
            case 2: //REMOVE TASK
                break;

            case 3: //Display TASK
                break;
            
            case 4: //QUITE TASK
                break;
            
            default:    //EXIT from MENU
                std::cout << "APPLICATion CLOSED !\n";
                return 0;
                break;
        }
        std::cin >> choice;
    }



    return 0;
}

void menu_lists(int choice)
{
    std::cout << " >>> MENU LISTS - TASK MANAGER OPERATIONS \n<<< ";

        std::cout << "1. Add Task\n";
        std::cout << "2. Remove Task\n";
        std::cout << "3. Display Tasks\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";

}
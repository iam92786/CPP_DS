/*
LINKED LISTS UISNG class and object
FEATURE : Add/Delete node at first
            display all node
*/

#include<iostream>


class node
{
    public:
        int data;
        node* next;
    
};

class linkedList
{
    private:
        node* head;

    public:
        linkedList()
        {
            head = nullptr;
        }

        void add_node_first(int value)
        {
            //create node
            node* newnode = new node;

            //check list is emoty
            if(head == nullptr)
            {
                //list is empty
                std::cout << "linked List 1st time\n";
                head = newnode;
                newnode->next = nullptr;
                newnode->data = value;
            }
            else{
                //linked list is NOT empty
                std::cout << "linked List 2nd time\n";
                newnode->next = head;
                head = newnode;
                newnode->data = value;
                //modefied the head of list
            }
        }

        void delete_node_first()
        {
            //check list is empty
            if (head == nullptr)
            {
                std::cout << "linked List Empty !\n";
                return;
            }
            else
            {
                //list contain one node
                if (head->next == nullptr)
                {
                    delete head;
                    head = nullptr;
                }
                else
                {
                    //list have more than one node
                    node* temp = nullptr;
                    temp = head;
                    head = head->next;
                    delete temp;
                    temp = nullptr;
                }
                

            }
            
        }

        void displa_list()
        {
            //check list is empty
            if(head == nullptr)
            {
                std::cout << "linked List is Empty \n";
                return;
            }
            else
            {
                node* trav = head;
                std::cout << "\n Linked List Head : ";
                while (trav != nullptr)
                {
                    std::cout << "-> " << trav->data;

                    trav = trav->next;
                
                }
                
            }

        }
        
};


int main (void)
{
    linkedList l1;
    
    l1.add_node_first(10);
    l1.add_node_first(20);
    l1.add_node_first(30);
    l1.add_node_first(40);
    l1.add_node_first(50);
    l1.displa_list();
    l1.delete_node_first();
    l1.delete_node_first();
    l1.displa_list();


    return 0;
}
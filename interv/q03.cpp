///### Q03 Find out the any loop in the linked list ? (Floyd’s Cycle Finding Algorithm)

#include<iostream>

class node
{
    public:
        int data;
        node* next;

    node(int inp)
    {
        data = inp;
        next = nullptr;
    }
};

class list
{
    private:
        node* head;
        int count;

    public:
        list();
        void add_node_first(int input);
        void display_list();
        void del_node_first();
        void add_node_last(int input);
        void del_node_last();

};



void list::del_node_last()
{
    //empty list
    if(head == nullptr)
    {
        std::cout << " del_node_last() : Empty List !" << std::endl;
        return;
    }

    //more than one node
    node* trav = head;
    while(trav->next->next)
    {
        //std::cout << "\n - " << trav->data ;
        trav = trav->next;
    }
    delete trav->next;
    trav->next = nullptr;
    count--;
}

void list::add_node_last(int input)
{
    //create node
    node* newnode = new node(input);

    //check the list is empty ?
    if(head == nullptr)
    {
        std::cout << " add_node_last : Empty List !" << std::endl;

        head = newnode;
        count++;
        return;
    }
    //List have more than one node
    node* trav = head;
    while(trav->next)
    {
        trav = trav->next;
    }
    trav->next = newnode;
    count++;
    
}

void list::del_node_first()
{
    //check the list is empty ?
    if(head == nullptr)
    {
        std::cout << "Can't Delete : Empty List !" << std::endl;

        return;
    }
    //modefied the head
    node* temp = head;
    head = head->next;
    delete temp;
}
void list::display_list()
{
    //check the lsi is empty ?
    if(head == nullptr)
    {
        std::cout << "Can't Display : Empty List !" << std::endl;

        return;
    }
    //traverse
    node* trav = head;
    std::cout << "\nTotal node count : " << count << std::endl;
    std::cout << "LIST : ";
    while (trav != nullptr)
    {
        std::cout << trav->data << " - " ;
        trav = trav->next;
    }
    //display
}

void list::add_node_first(int input)
{
    //creat node
    node* newnode = new node(input);
    
    //check node is empty or note
    if(head == nullptr)
    {
        std::cout << "Empty List !" << std::endl;
        head = newnode;
        count++;
        return;
    }

    //modefied the head
    newnode->next = head;
    head = newnode;
    count++;

}
list::list()
{
    count = 0;
    head = nullptr;
}

int main (void)
{
    list l1;


    l1.add_node_first(10);
    l1.del_node_last();
    l1.add_node_first(20);
    l1.add_node_first(30);
    l1.add_node_first(40);
    l1.add_node_last(50);

    l1.display_list();
    //l1.del_node_first();
    //l1.del_node_last();
    l1.display_list();


    return 0;
}
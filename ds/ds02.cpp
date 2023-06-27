/*
LINKED LISTS UISNG STRUCT
*/


#include<iostream>


struct node
{
    int data;
    struct node *next;
};
struct linkedList
{
    node* head;
    int node_count;
};




void list_init(linkedList *lptr)
{
    lptr->head = nullptr;
    lptr->node_count = 0;
}

bool is_list_empty(linkedList *lptr)
{
    if (lptr->head == nullptr)
    {
        return true;
    }
    else
        return false;
    
}

void add_node_first_pos(linkedList *lptr, int val)
{
    //create node
    struct node *temp = nullptr;
    struct node *newnode = new node;
    if (newnode == nullptr)
    {
        std::cout << "ERROR : New failed to Allocate memory !"<<std::endl;
        exit(1);
    }
    // Add data to the node
    newnode->data = val;
    newnode->next = nullptr;

    //check node is empty
    if(is_list_empty(lptr))    //list is empty
    {
        //newly node addr store into the head
        lptr->head = newnode;
        lptr->node_count++;
    }
    else    //list is NOT empty
    {
    
        //store the head->next into temp var
        temp = lptr->head;

        //modefied the head with new node addr
        lptr->head = newnode;

        //modefied the new node with add of temp var.
        newnode->next = temp;

        lptr->node_count++;

    }
    //add node at first pos

}

void display_linked_list(linkedList *lptr)
{
    if (is_list_empty(lptr))
    {
        //list is empty
        std::cout << "Oops! List is Empty !"<<std::endl;

    }
    else
    {
        //list have element/node
        std::cout << "\nLists HEAD -> ";
        struct node * trav = nullptr;

        trav = lptr->head;

        while (trav != nullptr)
        {
            std::cout << trav->data << " ->" ;
            trav = trav->next;
        }

    }
    
}

//delete the node
void delte_node_at_first(linkedList *lptr)
{
    //check list is empty or not
    if(is_list_empty(lptr))
    {
        std::cout << "Oops! List is Empty !"<<std::endl;

    }
    else{
        //if list conatin node
        struct node* temp = nullptr;

        //is list contain only one node
        if (lptr->head->next == NULL)
        {
            delete lptr->head;
            lptr->head = NULL;
            lptr->node_count = 0;
        }
        else
        {
            //if list contain more one node
            temp = lptr->head;
            lptr->head = lptr->head->next;

            //free the node
            delete temp;
            temp = NULL;
            lptr->node_count--;
        }
    }
}

//free entire list
void free_list(linkedList *lptr)
{
    if (is_list_empty(lptr))    
    {
        std::cout << "Oops! List is Empty !"<<std::endl;
    }
    else
    {   //list have elements

        while(! is_list_empty(lptr))
        {
            delte_node_at_first(lptr);
            display_linked_list(lptr);
        }
        std::cout << "\nLinked List is Deleted !"<<std::endl;

    }
    
}



int main (void)
{
    std::cout << "Linked Lists \n" << std::endl;

    linkedList lptr;
    list_init(&lptr);

    add_node_first_pos(&lptr, 10);
    add_node_first_pos(&lptr, 20);
    add_node_first_pos(&lptr, 30);
    add_node_first_pos(&lptr, 40);
    add_node_first_pos(&lptr, 50);
    display_linked_list(&lptr);

    delte_node_at_first(&lptr);

    display_linked_list(&lptr);

    free_list(&lptr);
    display_linked_list(&lptr);

    return 0;
}

/*
OUTPUT:
PS C:\Users\asiddiqui\ars\cdac\Cpp\ds> .\a.exe       
Linked Lists 


Lists HEAD -> 50 ->40 ->30 ->20 ->10 ->
Lists HEAD -> 30 ->20 ->10 ->
Lists HEAD -> 20 ->10 ->
Lists HEAD -> 10 ->Oops! List is Empty !

Linked List is Deleted !
Oops! List is Empty !
*/
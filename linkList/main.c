//Linked List Function Defination

#include<stdio.h>
#include "linklist.h"


struct node{
    struct node* next;
    int data;
};

struct list{
    struct node* head;
    int count;
};

int addNodeFirst(struct list *lptr)
{
    //create node
    //Check the list Is Empty or Not
    //

}
int createNode(struct list *lptr)
{

}
int init_list(struct list *lptr)
{
    //
    lptr->head = NULL;
    return 0;
}
int list_empty(struct list *lptr)
{
    if(lptr->head == NULL)
        return 1;
    else 
        return 0;
}

int main (void)
{
    struct list l1;
    int ret = list_empty(&l1);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
struct node
{
	struct node *next;
	int data;
	};
	
struct list
{
	struct node *head;
	int count;
	};

void initList(struct list *lptr)
{
	lptr->head = NULL;
}
int listEmpty(struct list *lptr)
{
	if(lptr->head == NULL)
		return 1;
	else
		return 0;
}
int addNodeFirst(struct list *lptr, int data)
{	
	//create node
	struct node *newnode = (struct node*) malloc(sizeof(struct node));
	
	//check List is EMpty
	if(listEmpty(lptr))
	{
		printf("addNodeFirstI() : LIST is Empty\n");
		return 0;
	}
	else
	{
		printf("addNodeFirstI() : LIST is Not Empty\n");
		return 0;
	}
	
	return 0;
	//list have more than one node
}

int main (void)
{
	printf("Linked LIST\n");
	struct list l1;
	initList(&l1);
	


	return 0;
}

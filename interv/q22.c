/*
LINKED LISTS : 
*/

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

void listInit(struct list *lptr)
{
	lptr->head = NULL;
	lptr->count = 0;
}

int isListEmpty(struct list *lptr)
{
	if(lptr->head == NULL)
		return 1;	//true
	else
		return 0;	//False
}

void addNodeFirst(struct list *lptr, int val)
{
	//create node
	struct node *newnode = (struct node*) malloc (1 * sizeof(struct node));
	newnode-> next = NULL;
	newnode-> data = val;
	
	//check node is empty
	if(isListEmpty(lptr))
	{
		//list is empty
		printf("addNodeFirst() : LIST IS EMPTY\n");
		lptr->head = newnode;
		lptr->count++;
	}
	else
	{
	
		//have only one node
		if(lptr->head->next == NULL)
		{	
			newnode->next = lptr->head;
			lptr->head = newnode;
			lptr->count++;
		}
		else
		{	//more than one node
			newnode->next = lptr->head;
			lptr->head = newnode;
			lptr->count++;
			
		}
	}
}	

void addNodeLast(struct list *lptr, int val)
{
	//create new node
	struct node *newnode = (struct node*) malloc (1 * sizeof(struct node));
	newnode-> next = NULL;
	newnode-> data = val;
	
	//Check List is Empty
	if(isListEmpty(lptr))
	{
		//list is empty
		printf("addNodeLast() : LIST IS EMPTY\n");
		lptr->head = newnode;
		lptr->count++;
		return ;
	}	
	//only one node
	if(lptr->head->next == NULL)
	{
		lptr->head->next = newnode;
		lptr->count++;
	}
	else
	{
		//more than one node
		struct node *trav = lptr->head;
		while(trav->next)
		{
			trav = trav->next;
		}
		trav->next = newnode;
		lptr->count++;
	}
}

void addNodeNpos(struct list *lptr, int val, int pos)
{
	//create node
	struct node *newnode = (struct node*) malloc (1 * sizeof(struct node));
	newnode-> next = NULL;
	newnode-> data = val;
		
	//list is empty or //pos = 1
	if(isListEmpty(lptr) || pos == 1)
	{
		//list is empty
		printf("addNodeNpos() : LIST IS EMPTY\n");
		addNodeFirst(lptr, val);
		return ;
	}	
	
	else if(pos == 2)
	{
		
		struct node *temp = lptr->head->next->next;
		lptr->head->next = newnode;
		newnode->next = temp;
		//printf("%d\n",temp->data);
		lptr->count++;		
	}
	else
	{
		struct node *trav = lptr->head;
		while(pos <= 2)	//pos <= 3
		{
			pos--;
			trav = trav->next;
		}
		
		newnode->next = trav->next;
		trav = newnode;
		lptr->count++;
		
	}
	
	//morethan one node
	
}
void deleNodeFist(struct list *lptr)
{
	//check list is Empty
	if(isListEmpty(lptr))
	{
		//list is empty
		printf("deleNodeFist() : LIST IS EMPTY\n");
		return ;
	}
	else
	{
		//only one node
		if(lptr->head->next == NULL)
		{
			free(lptr->head);
			lptr->head = NULL;
			lptr->count--;
		}
		else
		{	//more than one node
			struct node *temp = lptr->head;
			lptr->head = lptr->head->next;
			free(temp);
			temp = NULL;
			lptr->count--;
		}
	}
}

void displayList(struct list *lptr)
{
	//printf(" -> %d",lptr->head->next->data);
	//check list is Empty
	if(isListEmpty(lptr))
	{
		//list is empty
		printf("displayList() : LIST IS EMPTY\n");
		return ;
	}
	else
	{
		struct node *trav = lptr->head;
		
		while(trav)
		{
			printf(" -> %d",trav->data);
			trav = trav->next;
		}
	}
}
int main (void)
{
	printf("LINKED LIST\n");
	struct list l1;
	
	listInit(&l1);
	addNodeFirst(&l1, 10);
	addNodeFirst(&l1, 20);
	addNodeFirst(&l1, 20);
	addNodeFirst(&l1, 30);
	addNodeFirst(&l1, 40);
	addNodeNpos(&l1, 50, 3);

	displayList(&l1);
	return 0;
}

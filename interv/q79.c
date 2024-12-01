



struct node
{
	int data;
	struct node *next;
	};
	

struct node *createList(int val, int no_node)
{
	printf("\n--> createList\n");
	//create list
	struct node *head = NULL;
	
	//create ne node
	struct node* newnode = NULL;
	
	while(no_node)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		if(newnode  == NULL)
		{
			printf("createList() : mlloc failed !!\n");
			return 0;
		}
		newnode->next = NULL;
		newnode->data = (val * no_node);
		no_node--;

		//check list is empty
		if(head == NULL)
		{
			printf("createList() : List is empty\n");
			head = newnode;	
		}
		else
		{
			newnode->next = head;
			head = newnode;
		}
		printf("New Node Added %d\n",newnode->data);
	}
	return head;		
}

void display(struct node * l1)
{
	printf("\n--> display\n");
	// list is empty
	if(l1 == NULL)
	{
		printf("display() : List is empty\n");
		return;
	}
	//traverse list
	struct node *trav= l1;
	
	while(trav)
	{
		printf("%d\t",trav->data);
		trav = trav->next;
	}
	
}

void matchDataInList(struct node *l1, int tok)
{
	printf("\n\n--> matchDataInList\n");
	// list is empty
	if(l1 == NULL)
	{
		printf("display() : List is empty\n");
		return;
	}
	
	//only one node
	if(l1->next == NULL)
	{
		if(l1->data == tok)
		{
			printf("match found\n");
			free(l1);
			l1 = NULL;
			return;
		}
	}
	//match found
	
	struct node *curr = l1;
	struct node *prev = l1;
	
	while(curr)
	{
		if(curr->data == tok)
		{
			printf("%d\n",curr->data);
			break;
		}	
		prev = curr;
		curr = curr->next;
	}
	if(curr->next == NULL)
		printf("\nNo Match Found\n");
	
	prev->next = curr->next;
	free(curr);
	
	printf("Match %d",prev->data);
	
	
	
}
int main (void)
{
	printf("Linked List\n");
	struct node *l1 = NULL;
	l1 = createList(10,2);
	display(l1);
	
	matchDataInList(l1,20);	
	display(l1);
	
	return 0;
}


//Implement a function to detect a loop in linked list
//Find the last Node in linked list
struct node
{
	int data;
	struct node *next;
};

struct node * creatList(int val, int no_node)
{
	struct node *head = NULL;
	
	while(no_node)
	{
		//create Node
		struct node *newnode = (struct node*)malloc(sizeof(struct node));
		if(newnode == NULL)
		{
			printf("creatNode() : malloc failed !!\n");
			return 0;
		}
		newnode->next = NULL;
		newnode->data = (val * no_node);
		no_node--;
		
		//check head is empty
		if(head == NULL)
		{
			head = newnode;
		}
		else
		{
			newnode->next = head; 
			head = newnode;
		}
		printf("New Node is added = %d\n",newnode->data);
	}
	return head;
}

struct node* creatListLoop(int val, int no_node)
{
	struct node *head = NULL;
	struct node *newnode = NULL;
	while(no_node)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		if(newnode == NULL)
		{
			printf("creatNode() : malloc failed !!\n");
			return 0;
		}
		newnode->next = NULL;
		newnode->data = (val * no_node);
		no_node--;
		
		//check node is empty
		if(head == NULL)
		{
			printf("creatListLoop() : List is Empty\n");
			head = newnode;
		}
		else
		{
			newnode->next = head;
			head = newnode;
		}
		printf("New Node is added = %d\n",newnode->data);
	}	
	//find the last node
	struct node *trav = head;
	
	while(trav->next)
	{
		trav = trav->next;
		printf("- %d",trav->data);
	}
	trav->next = head;
	
	return head;
}
void display(struct node *l1)
{
	printf("List Display\n");
	//check list is empty
	if(l1 == NULL)
	{
		printf("display() : List is Empty !!\n");
		return;
	}
	struct node *trav = l1;
	printf("LIST ");
	while(trav)
	{
		printf("-> %d ",trav->data);
		trav = trav->next;
	}
	printf("\n	");
	//traverse
}

int loopDetect (struct node *l1)
{
	struct node *fast = l1;
	struct node *slow = l1;
	printf("loopDetect() Entry !!\n");
	
	while((fast->next != NULL) && (slow != NULL))
	{
		fast = fast->next->next;
		slow = slow->next;
		printf("fast=%d slow=%d\n",fast->data, slow->data);
		if(slow == fast)
		{
			printf("Linked list Loop at Node = %d\n",fast->data);
			printf("loopDetect() : Exit -> Loop in Linked List found !!\n");
			return 1;
		}
	}
	printf("loopDetect() : Exit -> No Loop in Linked List Found !!\n");
	return 0;
}

int LastNode (struct node *head)
{
	//check list is empty
	if(head == NULL)
	{
		printf("LastNode() : List is Empty !!\n");
		return 0;
	}
	//traverse
	struct node *trav = head;
	while(trav->next)
	{
		printf("- %d ",trav->data);
		trav = trav->next;
	}	
	printf("\nLast Node : %d\n",trav->data);
	
	//return
	return trav->data;
}
int main (void)
{
	printf("Implement a function to detect a loop in Linked List\n");
	struct node *l1 = creatList(10,10);
	
	
	
	
	//struct node *l2 = creatListLoop(5,10);
	display(l1);
	//loopDetect(l2);
	//printf("Last Node = %d\n",LastNode(l1));
	return 0;
}


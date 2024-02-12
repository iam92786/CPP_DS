









p1 - T1 T2 T3

fork()
	p2











struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct list
{
	struct node* head;
};


void addNodeFirst(struct list* lptr, int input)
{
	//create node
	struct node *newnode = (struct node*) malloc(struct node);
	if(newnode == NULL)
	{
		printf("addNodeFirst() : malloc Failed\n");
	}
	
	newnode->data = input;
	newnode->next = NULL;
	newnode->prev = NULL;
	
	
	//check node is empty or not
	if(lptr->head == NULL)
	{
		printf("addNodeFirst() : Empty Linked List\n");
		lptr->head = newnode;
	}
	else
	{
		//modefied the node
		struct node* temp;
		temp = lptr->head;
		lptr->head = newnode;
		newnode->next = temp;
	}
}


int main (void)
{
	struct list l1;
	return 0;
}





//
int a = 1;
int b = 2;
int c = 3;

//print gratest value in one statement
 

if(a > b) 
{
	if(c > a)
	{
		//c  great
	}
	else
	{
		//a great
	}
}
else
{
	if(c > b)
	{
		//c great
	}
	else
		//b great
}

OR

(a > b) ? ((a > c) ? printf("A Large\n") : printf("C Large\n")) : ((b > c) ? printf("B Large\n") : printf("C Large\n"));
	A big  		B big













//1100 1100	set 2nd bit


// 1st set and last reset
num = 1100 1100;

num = (num | 0x1) | (num ^ 0x80);	//1000 0000

//xor 

0 0 - 0 
0 1 - 1
1 0 - 1
1 1 - 0


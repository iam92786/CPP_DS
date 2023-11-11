
#include <iostream>

class node
{
	public:
	node* next;
	int data;
};

class list
{
	node* head;
	int count;

public:
	list()
	{
		head = nullptr;
		count = 0;
	}		
	
	bool isListEmpty();
	bool addNodeFirst(int);
	bool displayList();

	bool deleteNodeFirst();
	bool addNodeLast(int);
	bool deleteNodeLast();
	bool createNode10();
	
};

int main (void)
{
	list l1;
	l1.displayList();
	l1.deleteNodeLast();
	l1.createNode10();
	l1.displayList();

	l1.deleteNodeLast();
	l1.displayList();
	return 0;
}




bool list::deleteNodeLast()
{
	if(isListEmpty())	//empty List
	{
		std::cout << "list::deleteNodeLast() : List is Empty !" << std::endl;
		return true;
	}	
	else if(head->next == nullptr)	//only one node
	{
		delete head;
		head = nullptr;
		count--;
	}
	else	//more than one node
	{	
		node* trav = head;
		while(trav->next->next)
		{
			trav = trav->next;
		}
		delete trav->next;
		trav->next = nullptr;
		count--;
	}
	return true;
}


bool list::addNodeLast(int value)
{
	//create node
	node* newnode = new node;
	newnode->next = nullptr;
	newnode->data = value;	

	//zero node
	if(isListEmpty())
	{
		head = newnode;
		count++;
		return true;
	}	
	else if(head->next == nullptr)	//only one node

	{
		head->next = newnode;
		count++;
	}
	else
	{		//morethan one node
		//tarverse through last node
		node* trav = head;
		while(trav->next)
		{
			trav = trav->next;
		}
		
		//modefie the node
		trav->next = newnode;
		count++;
	}
	return 0;
}


bool list::createNode10()
{
	for (int i = 1 ; i <= 10 ; i++)
	{
		addNodeLast(10*i);
	}
	return 0;
}

bool list::deleteNodeFirst()
{
	//check List is Empty
	if(isListEmpty())
	{
		std::cout << "list::deleteNodeFirst() : List is Empty !" << std::endl;
		return true;
	}
	else if(head->next == nullptr)
	{
		//only one node --> update node
		delete head;
		head = nullptr;
		count--;
	}
	else
	{
		//more than one node	
		node* temp = head;
		head = temp -> next;
		delete temp;

	}
	return true;
}

bool list::displayList()
{
	//check List is Empty
	if(isListEmpty())
	{
		std::cout << "list::displayList() : List is Empty !" << std::endl;
		return true;
	}
	else
	{
		//traverse through the list
		node* trav = head;
		std::cout << "LIST : ";

		while(trav)
		{
			std::cout << trav->data << " ->";
			trav = trav->next;
		}
		std::cout << std::endl;
	}
	return true;
}

bool list::addNodeFirst(int value)
{
	//create node
	node* newnode = new node;
	newnode->next = nullptr;
	newnode->data = value;

	//check Is list Empty
	if(isListEmpty())
	{
		//List is Empty
		head = newnode;
		count++;
	}
	else
	{
		//List is Not Empty --> Update the node
		newnode->next = head;
		head = newnode;
		count++;
	}
	return true;
}


bool list::isListEmpty()
{
	if(head == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

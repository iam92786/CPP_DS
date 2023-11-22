
#include <iostream>
//Single Linear Linked List - SLLL
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
	//ALL Functon - Linked List
		std::cout <<"1. Display List"<<std::endl;
		std::cout <<"2. Add Node At First"<<std::endl;
		std::cout <<"3. Delete Node A First"<<std::endl;
		std::cout <<"4. Add Node At Last"<<std::endl;
		std::cout <<"5. Delete Node At Last"<<std::endl;
		std::cout <<"6. Create List 10 Node"<<std::endl;
		std::cout <<"7. Delete Entire List"<<std::endl;

	// All Function - Linked List Data Structure
		std::cout <<"8. Middle Element SLLL"<<std::endl;	//Find Middle element of a singly linked list in one pass.
		std::cout <<"9. Find Length SLLL"<<std::endl;		//Find the length of a singly linked list.
		std::cout <<"10. Reverse SLLL"<<std::endl;		//Reverse a linked list.
		std::cout <<"11. Remove Duplicate Number"<<std::endl;				//Remove duplicate nodes in an unsorted linked list.
		std::cout <<"12. "<<std::endl;
		std::cout <<"13. "<<std::endl;
		std::cout <<"14. "<<std::endl;
		std::cout <<"15. "<<std::endl;
	}		
	
	bool isListEmpty();
	bool addNodeFirst(int);
	bool displayList();

	bool deleteNodeFirst();
	bool addNodeLast(int);
	bool deleteNodeLast();
	bool createNode10();
	bool deleteList();

	bool middleElement();
	bool findLength();
	bool reverseList();
	bool removeDuplicateNum();
	
};

int main (void)
{
	list l1;
	l1.createNode10();
	l1.displayList();
	l1.findLength();
	l1.addNodeFirst(50);
	l1.addNodeLast(20);

	l1.removeDuplicateNum();

	l1.deleteList();
	return 0;
}

//=========================Linked List Data Structure ===========================>>>>>>//


bool list::removeDuplicateNum()
{
	//check Is list Empty
	if(isListEmpty())	//empty List
	{
		std::cout << "list::removeDuplicateNum() : List is Empty !" << std::endl;
		return true;
	}
	else if (head->next == nullptr)	//only one Node
	{
		displayList();
		return 0;
	}
	else
	{
		//std::cout << trav->data <<std::endl;
		int hashT[1000] = {0};
		
		node* curr = head;
		node* prev = head;
		while(curr)
		{

			if(hashT[curr->data] == 0)
			{
				//first time number occure
				hashT[curr->data] = 1;	
			}
			else
			{
				//occure second time 
				std::cout << "Duplicate Node : " << curr->data << std::endl;
			}
			prev = curr;
			curr = curr->next;
		}

	}

	return 0;
}

bool list::reverseList()
{
	//check Is list Empty
	if(isListEmpty())	//empty List
	{
		std::cout << "list::reverseList() : List is Empty !" << std::endl;
		return true;
	}
	else if (head->next == nullptr)	//only one Node
	{
		displayList();
		return 0;
	}
	//more than One node

	//reach to the last node
	node* trav = head;
	node* temp = nullptr;
	while(trav->next)
	{
		trav = trav->next;
		
	}
	//update the head
	
	
	return 0;
}

bool list::findLength()
{
	int len = 0;
	//check Is list Empty
	if(isListEmpty())	//empty List
	{
		std::cout << "list::findLength() : List is Empty !" << std::endl;
		return true;
	}
	
	//traverse the list 
	node* trav = head; 
	while(trav)
	{
		trav = trav->next;
		len++;
	}
	std::cout <<"Length of Linke List : "<<len <<std::endl;
	return 0;
}

bool list::middleElement()
{
	node* fast = head;
	node* slow = head;

	//check Is list Empty
	if(isListEmpty())	//empty List
	{
		std::cout << "list::MiddleElement() : List is Empty !" << std::endl;
		return true;
	}

	//traverse the pointer in loop
	while(fast && fast->next)	//pointer pointing to upcoming node, Which, i dont it is avilable or not ?
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	std::cout <<"Middle Element : "<<slow->data <<std::endl;
	return 0;
}


//===========================Linek List Operations ================================>>>>//
bool list::deleteList()
{	//delete the Entire List - All the Node
	
	//check the list is empty or not
	if(isListEmpty())	//empty List
	{
		std::cout << "list::delete list() : List is Empty !" << std::endl;
		return true;
	}
	//call the fun delete at first
	node* trav = head;
	while(!isListEmpty())
	{
		deleteNodeFirst();		
	}
	std::cout << "list::delete list() : Linked List is Deleted - Node Count : " << count << std::endl;
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
		count--;

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

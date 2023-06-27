/*
LINKED LIST - SLLL FULL IMPLEMENTATION
CLASS AND OBJECT
WITHOUT INTELLISENCE
*/

#include<iostream>


class node
{
	public:
	node* next;
	int data;
};

class list
{
	private:

	node* head;
	int n_count;
	

	public:

	list()
	{
		head = nullptr;
		n_count = 0;
	}

	bool isListEmpty()
	{
		if(head == nullptr)
			return true;
		else
			return false;
	}

	void addnode_first(int val)
	{
		//create node
		node *newnode = new node;
		newnode->next = nullptr;
		newnode->data = val;

		//check node is empty
		if(isListEmpty())
		{			
			//std::cout << "node is empty" <<std::endl;
			head = newnode;
			n_count++;
		}
		else
		{
			//modefied head
			node* temp = nullptr;
			temp = head;
			head = newnode;
			newnode->next = temp;
			n_count++;

		}
	}	

	void deletenode_first()
	{	
		//check list is empty
		if(isListEmpty())
		{
			std::cout << "Linked List is empty !" <<std::endl;

		}
		else
		{
			//check is it first node
			if(head->next == nullptr)
			{
				//single node - delete
				delete head;
				head = nullptr;				

			}
			else
			{
				//delete: have multiple node
				node* temp = head;
				head = temp->next;
				delete temp;
				temp = nullptr;


			}
			
			//decrement node count
			n_count--;
		}		

	}

	void display_list()
	{
		//check node is empty
		if(isListEmpty())
		{			
			std::cout << "node is empty" <<std::endl;
			
			return;
		}
		std::cout << "List : "; 
		node* trav= head;
		while(trav)
		{
			std::cout << trav->data << "->";
			trav = trav->next;
		
		}
	}
	void addnode_last(int val)
	{
		//check node is empty
		if(isListEmpty())
		{			
			std::cout << "node is empty" <<std::endl;
			addnode_first(val);
			return;
		}
		
		//only one node
		if(head->next == nullptr)
		{
			std::cout << "Onlly one node !" <<std::endl;
			addnode_first(val);
			
		}
		else
		{
			//have multiple node
			//create new node
			node *newnode = new node;
			newnode->next = nullptr;
			newnode->data = val;


			node* trav = head;
			while(trav->next)
			{
				trav = trav->next;
			
			}
			//modefied last node
			trav->next = newnode;
			n_count++;

		
		}
	}

	

};

int main (void)
{
	list l1;

	l1.display_list();
	l1.addnode_first(10);
	l1.addnode_first(20);
	l1.addnode_first(30);
	l1.addnode_first(40);
	//l1.deletenode_first();
	l1.addnode_first(50);
	l1.addnode_last(60);


	l1.display_list();
	


    return 0;
}
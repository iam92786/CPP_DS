//Linke list using class (all function implemented)


#include<iostream>

class node
{
	public:
	node* next;
	int data;

	node(int val)
	{
		next = nullptr;
		data = val;
	}
};


class list
{
	private:

	node* head;
	int count;

	public:
	list()
	{
		head = nullptr;
		count = 0;
	}

	void addnode_first(int val);

	void display()
	{
		//check list is empty
		if(head == nullptr)
		{
			std::cout << "LIST IS EMPTY\n";
			return;
		}
		else
		{
			node* trav = head;
			std::cout << "\nLIST : ";
			while(trav != nullptr)
			{
				std::cout << trav->data << " ";
				trav = trav->next;
			}	

		}
	}

	void deletenode_first()
	{
		//check list is empty
		if(head == nullptr)
		{
			std::cout << "LIST IS EMPTY\n";
			return;
		}
		else
		{
			node* temp = head;
			head = head->next;
			delete temp;
			temp = nullptr;
			count--;

		}
	}

	void deletenode_last()
	{
		//check list is empty
		if(head == nullptr)
		{
			std::cout << "LIST IS EMPTY\n";
			return;
		}
		else
		{
			//only one node
			if(head->next == nullptr)
			{
				delete head->next;
				head = nullptr;
				count--;
				return;

			}

			//traverse to last node
			node* trav = head;

			while(trav->next->next != nullptr)
			{
				trav = trav->next;
			}

			//delete node
			delete trav->next;
			trav->next = nullptr;
			count--;
		}
	}

	void addnode_last(int val)
	{
		//create node
		node* newnode = new node(val);
		
		//check node is empty
		if(head == nullptr)		
		{
			//std::cout << "LIST IS EMPTY\n";
			addnode_first(val);
			return;
		}

		//only one node
		if(head->next == nullptr)
		{
			head->next = newnode;
			count++;
			return;
		}		
		//list have more than node
		node* trav = head;

		//traverse to last node
		while(trav->next != nullptr)
		{
			trav = trav->next;
		}
		//modefied the node
		trav->next = newnode;
		count ++;

	}


	void addnode_nth_pos(int val, int nth);
	void deletenode_nth_pos(int nth);

};


void menu_func();

int main (void)
{
	int choice;
	menu_func();

/*

	while(1)
	{

		switch (choice)
		{
		case 0:		//exit
			return 0;
			break;
		
		case 1:		//add node at first
			break;

		default:
			break;
		}
	}

	*/

	list l1;
	l1.addnode_last(10);
	l1.addnode_first(20);
	l1.addnode_first(30);

	l1.addnode_first(40);
	l1.addnode_first(50);
	l1.display();
	l1.deletenode_first();
	l1.display();
	l1.deletenode_last();
	l1.display();

	l1.addnode_last(60);
	l1.display();

	return 0;
}

int menu_func(int &choice)
{
	
	std::cout <<"1. Add node at First" << std::endl;
	std::cout <<"2. Add node at Last" << std::endl;	
	std::cout <<"4. Add node at nth position" << std::endl;
	std::cout <<"3. Delete node at First" << std::endl;
	std::cout <<"4. Delete node at Last" << std::endl;
	std::cout <<"4. Delete node at nth position" << std::endl;
	std::cout <<"5. Display" << std::endl;


	return choice;
}

void list :: deletenode_nth_pos(int nth)
{


}

void list :: addnode_nth_pos(int val, int nth)
{
	//check list is empty

	//nth pos == 1st call add node at first

	//nth pos == last (== count) call add noe at last



}

void list :: addnode_first(int val)
{
	//create node
	node* newnode = new node(val);

	//check list is empty
	if(head == nullptr)
	{
		head = newnode;
		count ++;
	}
	else
	{
		newnode->next = head;
		head  = newnode;
		count ++;

	}
}

# Intervew Question





## Comp : Ignitarium, By : Basil AP @20jun23
### QUESTION : 13 : What is Output of the code snippet.
```
#include <stdio.h> 

#define SQR(x) (x*x) 

Int main() { 

    int a , b =3; 

    a = SQR(b+2) 

    printf("%d", a) 

    return 0; 

} 

// Answer : a = b+2*b+2
[11:23] Basil AP
```

### QUESTION : 12 What is Output of the code snippet

#include <stdio.h> 

int* sum(int a, int b) { 

    int result = a+b; 

    return &result; 

}  

int main() { 

    printf("return value = %d", *(sum(5, 6))); 
    return 0; 

} 

### QUESTION : 11 Reverse the string
input: "Hi am Raju"
output: "Raju am Hi"

### QUESTION : 10 Draw the pattern
```
*         * 

 *       *  

  *     *   

   *   *    

    * *     

     *      

    * *     

   *   *    

  *     *   

 *       *  

*         * 
```
### Q09 what is abstract class?
### Q08 what is static and volataile keyword?
### Q07 what is virtual?
### Q06 what is lemda function?
### Q05 what is function pointer?



## Comp : Qualcomm, Praveen @02jun23

### Q04 Data Structure, 
find the frequency of number in the array and sort on the based of its frequency.
```
1 2 3 2 1 3 4 5 1 1 1 7  

1 5
2 2
3 2
4 1
5 1
7 1



0 < i < 255 

0 < freq< 255


tie breaker --> the number come first


void func(int[]a, int len,int []rs)
{


} 
```

### Q03 Find out the any loop in the linked list ? (Floyd’s Cycle Finding Algorithm)

### Q02 Write Linked list code in cpp.

### Q01 generic getter and setter ?


/*

class node
{
	public:
	int data;
	node* next;
};

class list
{
	public:
	node* head;
	
	list()
	{
		head = nullptr;
	}
	void addnode_first(int val)
	{
		//check node
		node* newnode = new node;
		newnode->next = nullptr;
		newnode->data = val;

		//check empty list
		if(head == nullptr)
		{
			//empty list
			head = newnode;
		}
		else
		{
			//list have multiple node
			newnode->next = head;
			head = newnode;

		}
	}
	void display()
	{
		//check empty list
		if(head == nullptr)
		{
			//empty list
			std::cout << " EMPTY LIST !" << std::endl;
		}
		else
		{
			//have multiple node
			node*  trav = head;
			
			std::cout <<"\nLIST : ";
			while	(trav != nullptr)
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
			//empty list
			std::cout << " EMPTY LIST !" << std::endl;
			return;
		}

		//more than node
		node* temp = head;

		head = head->next;
		delete temp;	
	
	}

	void deltenode_end()
	{
		//check list is empty
		if(head == nullptr)
		{
			//empty list
			std::cout << " EMPTY LIST !" << std::endl;
			return;
		}
		


		//have multiple node
		
		node* trav = head;
		while(trav->next->next)
		{
			//traverse to end of the node
			trav = trav->next;
			std::cout << " trav<-data = " << trav->data << std::endl;	

		}
		
		delete trav->next;
		trav->next = nullptr;

	}

};


int main (void)
{
	list l1;
	l1.addnode_first(10);
	l1.display();
	l1.addnode_first(20);
	l1.addnode_first(30);
	l1.addnode_first(40);
	l1.addnode_first(50);
	l1.display();
	//l1.deletenode_first();

	l1.deltenode_end();
	l1.display();





	return 0;
}*/
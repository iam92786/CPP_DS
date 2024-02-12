
#include<stdio.h>
#include<string.h>

//1. Process and thread
//2. How to access static function from other files/program
//3. Thread spin lock, binary semaphore (condition), mutex
//4. Virtual memory, relocate memory, Physical memory
//5. Page fault
//6. Synchrnization mechanism used in bottom half - interrup handler


/*
	NOTES
	1. A static variable declared in the global (outside any function) is stored in the "DATA" section of memory. 
		a. Initialized static variables go to the initialized data section.
		b. Uninitialized static variables go to the uninitialized data section.
*/
//FEEDBACK : Linux concept is Good, But Coding need to improve

//Littel to big without using bitwise operator



/*
//Write a program for delete a node at first

LIST = HEAD->next -> next -> next ....
		n1    n2     n3
		
		
		

void deleteNodeFirst(struct list *lptr)
{
	//check list is empty or not
	if(head == NULL)
	{
		//list ie epty
		return;
	}
	else
	{	//modefied the node
		
		struct list *temp = NULL;
		
		temp = head->next;
		
		head->next = head->next->next;
		
		free(temp);
	
	
	}
}
*/

//reverse the string

struct node
{
	double ch1;	//1byte
	//int num;	//4byte

	char ch3;
	int num2;	//4byte
	char ch;	//1byte
};


int main (void)
{
	struct node n1;
	printf("Sizeof : %ld\n",sizeof(n1));

	char str[32] = "i am soft eng"; // 0 - 13 (include NULL)
	int len;
	printf("Original : %s\n",str);

	len = strlen(str);
	printf("len = %d\n",len);
	
	int i,j;
	char temp;
	
	for(i = 0, j = len-1; i < j; i++,j--)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}
	
	//display
	printf("%s\n",str);



	return 0;
}
/*
//
struct node
{
	int num;	//4byte
	char ch;	//1byte
	int num2;	//4byte
};

4byte + 1byte + 3 byte (sp) + 4byte

//32 machine 

IO operation




//12byte

*/

/*

int main (void)
{ 
		
	char num = 0x10; // 0001 0000
	
	//3rd bit = set
	
	num = num | (0x1 << 2) ;
	
	printf("%x\n",num);	 
	
	return 0;
}	

*/

/*
void add (int a, int b);

int main (void)
{
	void (*functionptr) (int, int) = add;
	
	functionptr(num1, num2);
	

	return 0;
}

*/










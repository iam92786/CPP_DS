# Intervew Question
### QUESTION : 14 : 
## Company : NA




## Company :  VVDN Technology

### QUESTION : 44 : To count num of set bits in a byte. (only using bit wise operations).
```
#include <stdio.h>
int main()
{
    char num = 0x1f;    //8 bit  //0x01
    int count = 0;
    for(int i = 0; i < 8; i++)
    {
        if (num & 0x1)          //0001 1111 & 0000 0001 -> 0000 0001
        {
            count++;
        }
        num = num >> 1;
    }
    printf("Set bit = %d\n",count);
    return 0;
}
```
### QUESTION : 43 : 

```
main() {
		Static int i=3;
		--i;
		If (i) {
			main()
			printf(“%d ”, i);
			}
	}
	OUTPUT : 0 0
```
### QUESTION : 42 : Reverse a string store data into dynamically alocated memory. len of string 16 bit
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //char str[16] = "i am soft eng";   
    char *pstr = (char *) malloc(16 * sizeof(char));
    scanf("%s",pstr);
    //printf("%s",pstr);
    char temp;
    int j =0;
    for(int i = (strlen(pstr)); i > 2; i--)      //arshad
                                                    //j    i
    {
        printf("%c\n",pstr[i]);   
        temp = pstr[j];
        pstr[j] = pstr[i];
        pstr[i] = temp;
        j++;
    }
    printf("%s",pstr);
    return 0;
}
```

### QUESTION : 41 : What is the key difference between embedded C and standard C? How do they differ in terms of memory usage and execution?
 
### QUESTION : 40 : Explain the concept of static and dynamic memory allocation in embedded systems. When would you prefer one over the other?
``` ANSWER
static memory allocation --> memory assign during compile time --> Size fixed --> 
	- Faster execution, simlpe
	- runnning out of memory during run time
	eg : Array

Dynamic Memory Allocation --> memory assign during run time --> using function malloc(), free() --> Heap Area
	- Flexible, dynamic, 
	- required careful management of memory - memory lekage, runtime overhead increase 
	eg : Linked list

Preference:
	- resource constrain.
	- memory requirements.
	- 


```
 
### QUESTION : 39 : Describe the role of a Board Support Package (BSP) in embedded systems. How does it differ from other layers of the software stack?


 
### How would you implement and handle interrupts in a Linux device driver for an embedded system?
 
### What is the Linux kernel, and how does it interact with the hardware in an embedded system?

SOC = AM335x
GPIO  <--> driver/gpio/omap-gpio.c  <--> driver/gpio/gpio-lib.c  <-->  sys/class/gpio  <-->  open()

H/W		Low level Drivers		High level Drivers		VFS node	user space
		h/w specific			generic-linux
 

Explain the purpose and functionality of the bootloader in the context of a BSP.
```
BOOTLOADER : Power-OFF state ----> OS take control
```
 
### QUESTION : 38 : Explain the steps involved in porting an application from one Linux distribution to another for an embedded system.
1. Understand the Target Environment: kernel version, linux distribution, toolchains, configurations
2. Check Dependencies: of application
3. Check Compiler/toolchain and Version: linux - gcc , android - clang or LLVM, android NDK
4. Update System Libraries: linux - glibc, android - bionic c
5. update systemm call
6. file system diff: path diff
 
### QUESTION : 37 : Discuss the process of cross-compiling the Linux kernel for a specific embedded target.
user sapce program = 
1. $arm-linux-gnueabihf-gcc q32.c -o q34-arm
2. copy into the target board
3. $./q34-arm //Run

kernel space program = 
1. make ARCH=<your_architecture> CROSS_COMPILE=<your_cross_compiler_prefix> modules
2. insmod <*.ko>
3. rmmod <*.ko>

### QUESTION : 36 : What is the process of porting Linux to a new embedded hardware platform?
1. Hardware Familiarization: arcit, memory map i/o ports, peripheral.
2. Toolchain Setup: native compile or cross compile
3. Bootloader Configuration:u-boot, grub
4. Kernel Configuration: - DTS, .config, makefiel
5. Device Driver Integration: bring up of audio, display, battery, pheripheral.
6. Board Support Package (BSP):
7. Kernel Compilation:
8. Root Filesystem:
9. Testing and Debugging:
10. Documentation: certification

### QUESTION : 35 : Discuss the significance of file operations in the context of Linux device drivers.
```
f_ops structure
{
	open, read, write, close, ioctl,
}
```
### QUESTION : 34 : write a c program to delete or remove a given word from the string.

### QUESTION : 33 : write a code for circular queue, and its functionality. STATIC QUEUE

### QUESTION : 32 : Write a code for Stack implementation and its functionalites. STATIC STAKE



### QUESTION : 31 : Write a c program for an array using dynamic memory allocation and take user input for size and elements of array, remove duplicate elements from array and Sort the array using any sorting algo.





## Company : Innominds. Banglore - Royal E. Project

### QUESTION : 30 : Interview Question @ Manish. (ref : Screenshot)
	while(1)	//STATEMENT : Bit wise operation to achive this logic pattern in a while loop.
	{
		1000 0001 
		0100 0010 
		0010 0100
		0001 1000 
	}
	num = 0xf1;
	tep = ((num & 0xf0) > 1 )| (num & 0x0f) < 1)

### QUESTION : 29 : Double pointer - 2d array.

### QUESTION : 28 : Double pointer - function passed pratice
### QUESTION : 27 : Convert a structure into I2C package formate to transfer throufg the I2C protocol. 
### QUESTION : 26 : kernel concepts and MCU realted  and memory layout of a program
### QUESTION : 25 : addrssing modes in I2c and speeds of communications
### QUESTION : 24 : free RTOS : how to create threads : registring interuupts

### QUESTION : 22 : Reverse a linked list For the given node =================================================
``` 
struct node {
  int data;
  struct node* next;
};
```
//three pointer//prev curr next
 
void reverse(struct Node **head){
	struct Node *prev=NULL;
	struct Node *curr= *head;
	struct Node *next=NULL;
 
	while( curr != NULL ){
	next = curr->next;
	curr->next = prev;
	prev = curr;
	curr=next;
	}
	*head = prev;
}

### QUESTION : 22b :  solve above question using recursive approch. 
//
head
  10->20->30
 
  10<-20<-30
	   head
 
void reverse(struct node* p){
 
	struct Node* new = p->next;
	new->next = p;
	p->next= NULL;
 
	reverse(p->next);
}

### QUESTION : 21 : Function Pointer=================================================
int *fun(int x){
 
	printf("value of x is %d",x);
 
	return ;
}
int main(){
 
	int (*fun_ptr)
 
return 0;
}
### QUESTION : 20 : Bit Manipulation =================================================
int a=0x5635;
int out = 0x5365;
 
56 35 - 
53 65 -
 
int num1,num2;
int out;
 
num1=(0xf0f0 & a) >>4; //65 
num2=(0x0f0f & a) <<4; //53
 
out = num2 | num1;//5365

### QUESTION : 19 :  string manipulation =================================================
char str[] = "This is good news";
output = "sihT si doog swen";
 
 
	int j = 0;
	for(int i = 0; i < 0; i++)
	{
		if(str[i] == ' ')
		{
			for(j = i-1; j >= 0 || str[j] == ' '; j--)
			{
				printf("%c", str[j]);
			}
		}
	}
	
### QUESTION : 18 : Sort array, who has only two type elements (7, 8)
int arr[] = {7,8,7,7,...8}; size = 100
int arr[] = {7,7,7..8,8,8};
 
Logic : CASE
1. 7 7 -> i++
2. 7 8 -> ok 
3. 8 7 -> swap
4. 8 8 -> j--
	
	int i = 0;
	j = 100;
	int temp;
	
	while(i <= j)
	{
		if(arr[i] == 7 && arr[j] == 8)
		{
			//No swap
			i++;
			j--;
		}
	
		if(arr[i] == 8 && arr[j] == 7)
		{
			//swap elements arr[i]<--> arr[j]
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	
		if(arr[i] == 7 && arr[j] == 7)
		{
			i++;
		}
	
		if(arr[i] == 8 && arr[j] == 8)
		{
			j--;
		}
	
	}
 
 
### QUESTION : 17 : int in = 0x3423; int out = 0x4332;

	34 23
	43 32
	
	num = 0x3423;
	
	num1 = (0xf0f0 & num)  >> 4     //0302
	num2 = (0x0f0f & num)  << 4      //4030
	
	num1 | num2            //


### QUESTION : 16 : For given array, sort the array, Sort a array, array has only binary number. use only one loop 

int arr[] = {0,1,0,0,...,1} //size = 20
 


### QUESTION : 15 : int var = 0x23; out = 0x32;
 
 
	int first = (var & 0xf0);
	int second = var & 0x0f);
	
	int out = (second << 4) | (first );


### QUESTION : 14 : int num = 0x23; toggel the 7th bit of this number


## Company : Ignitarium, By : Basil AP @20jun23
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

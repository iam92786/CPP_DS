# Intervew Question

## Company : NA | Round - x
### QUESTION : 14 : 


## Company : KPIT | Round - 1 |
### QUESTION : 78 Clear all the left bits from the nth bit position
```
char num =	0xff;
char clr = (1 << 3);	//0000 1000

//do 2nd complemet of variable "clr", by : clr+1
clr = //1111 0000

perform AND opr
num = num & clr;
```

## Company : Moschip | Round - 1 | Anil Kumarl
### QUESTION : 77 
2)Find first highest and second highest numbers in below array without sorting
int arr[10] = {5,10,15,3,9,21,7,12,2,16};

### QUESTION : 76
1)Write a C program to rotate bits left the input by number of times passed through Function
int Shift_Input(unsigned short input, int num_of_times);
input = 0x2345; num_of_times =4 output = 0x3452

## Company : Nivida | Round - 1 | HackerRank
### QUESTION : 75 : Given two strings S and T, which may contain the # character representing a backspace, process both strings such that when a backspace (#) occurs, it removes the character immediately to its left (if any). After processing all backspaces in both strings, compare the final versions of the two strings. You are required to implement this comparison without using the strcmp function.

Write a function that returns: 0 if both processed strings are equal. And -1 if the processed strings are not equal.

## ARM : Round - 3
### QUESTION : 74 : Write Macro for set/reset(given by) next n`s(3bit or 4bit or 5bit.. given by user) number fo bit from the given pos. wherea s nth bit is  
```
int set_clear_bit (int num, int cond, int start, int end)
num = 0xffff ffff
cond = 0 - reset
	1 - set (1)
start - start pos of mask
end - end pos of mask
```
### QUESTION : 73 : There is a vaiable which is used by interrup hnadler(top half) as well as bottom half of the same interrupt. tell me the synchronization mechanism for that ?
### QUESTION : 72 : code snippet - malloc , memory leakge

## ARM : Round - 2
### QUESTION : 71 : Write Macro for fetch next n`s(3 or 4 or 5.. given by user) number fo bit from the given pos. wherea s nth bit is  
### QUESTION : 70 : Memory alignment, lets a page size is 4k, and only 2k memory is left on ram, how we can align this 2k memory to page size of 4k?
### QUESTION : 69 : code snippet

## ARM | Round - 1 | By Adam
### QUESTION : 68 : FIZZ BUZZ c coding
### QUESTION : 67 : Virtual ANd Physical Address conversion
### QUESTION : 66 : Process and Thread
### QUESTION : 65 : Spin lock

## IBM : round - 1
### QUESTION : 64 : deadlock condition
```
process - p1	-> 	
process - p2	-> 
```
### QUESTION : 63 : in 8 bit number, count the set bit, and also increment the count of each set bit ocuurance , diff counter for each bits in 8 bit number, each counter have diff thresold, once the counter reach to certain thresold tak diff action like T1, T2, T3

```
/*DEFINE*/
#define BIT01_LIMIT 5
#define BIT02_LIMIT 4

/* VARIABLE DEC*/

void counter(int num)
{
	switch (num)
	{
		case 1:
			bit1++;
			if(bni1 >= BIT01_LIMIT)
				//TASK - 1
		break;
		
		case 2:
			bit2++;
			if(bni2 >= BIT01_LIMIT)
				//TASK - 1
		break;
		
		case 4:
			bit2++;
			if(bni2 >= BIT01_LIMIT)
				//TASK - 1
		break;
		
		default
			printf("default case");
		break;
		
	}

}

int main(void)
{
	int num = 0x55;	//0101 0101
				//..16  8 4 2 1
	int temp;

	for(int i = 0; i < 8; i++)
	{
		temp = num & (0x1 << i);
		if(temp)
		{
			counter();	//1, 0, 1
		}
	}

	return 0;
}
//--------------------------------------------------------------------------//
//8 bit register find the number of set bit
int main (void)
{
					c3 = 3 -> t3
	int num = 0x54;	// 0101 0100
	int setbit = 0;
	for(int i = 0; i < 8; i++)
	{					
		if((num >> i) & 0x1)	//0101 0101 >> 00101 010	& 1 = 1
					//00101 010 >> 000101 01		= 1
		{
			setbit++;
		}
	}


	return 0;
}

```
### QUESTION : 62 : Write Hello world 100 times, without using loop and go to.
```
#include<stdio.h>
void printHello()
{
	static int count = 100;
	
	printf("Hello World\n");
	
	count--;
	
	if(count < 0)	//100 - 99-- 1
	{
		return;
	}
	printHello();
}


int main (void)
{
	printHello();

	return 0;
}

//Write above prog in cpp -------------------------------------------//

class printf
{
	int count = 100;

	void printHello()
	{	
		std::cout << "Hello World" << std::endl;
	
		count--;
	
		if(count < 0)	//100 - 99-- 1
		{
			return;
		}
		printHello();
	}
};

int main (void)
{

	return 0;
}
```

## Samsung Semicon
### QUESTION : 61 : Write c program for Binary search for sorted array
### QUESTION : 60 : Bit swap in a int number (nth bit replace with mth bit)
```
#define BV(x) (1 << x)
int main (void)
{
//PROBLEM - 01 : swap the nth bit with mth bit

	int nth, mth, num;
	printf("Enter number num, nth bit, mth bit\n");
	scanf("%d %d %d",&num, &nth, &mth);
	printf("num = %x\nnth = %x\nmth = %x\n",num,nth,mth);

	if(((num & BV(nth)) >> nth) != ((num & BV(mth)) >> mth))
	{
		printf("Unequal -> SWAP\n");
		num = num ^ BV(nth);
		num = num ^ BV(mth);
	}
	printf("After SWAP : num = %x\nnth = %x\nmth = %x\n",num,nth,mth);
	// 0 ^ 1 = 1
	// 0 ^ 0 = 0
	
	//nth  mth
	// 0   0  = No change
	// 1   1  = no change
	// 1   0  = swap
	// 0   1 = swap

	return 0;
}
```
## ACL Digital-Volynsis Round - 02
### QUESTION : 59 : String to array conversion

### QUESTION : 58 : 
```
1st data: XXXX XX11 1111 1111
2nd data: XXXX XX22 2222 2222
3rd data: XXXX XX33 3333 3333

32bit data: XX33 3333 3333 2222 2222 2211 1111 1111
					 A9	    0	
uint32_t pack(uint16_t data_1, uint16_t data_2, uint16_t data_3)
```

## Mirafra Round - 03 By Director
### QUESTION : 57 : Convert littel indian to Big indian without using bit wise operation.

### QUESTION : 56 : Add node in to the Linked List in sorted manner always.

### QUESTION : 55 : Find the max freq of any digit in a int number
```

#include<stdio.h>
int main (void)
{
	int num = 123453;
	int arr[10] = {0,0,0,0,0,0,0,0,0,0};
	int temp = 0;
	int max = 0;
	int freq;
	for(int i = 0; i < num; i++)
	{
		temp = num%10;
		arr[temp]++;
		num = num/10;
		printf("%d\n",num);
	}
	for(int j = 0; j < 10; j++ )
	{
		printf("%d = %d\n",j,arr[j]);
		//max
		if(arr[j] > max)
		{
			freq = j;
			max = arr[j];
		}
	}
	printf("freq digit = %d\n",freq);
	return 0;
}

```
## QCOM Noida Round - 01
 
### QUESTION : 54 : Void pointer
### QUESTION : 53 : Storage class scope - c memory layout - scope of each class
### QUESTION : 52 : extern and static syntax
 
### QUESTION : 51 : Count set bits in a number
### QUESTION : 50 : Set bits in a integer
### QUESTION : 49 : void pointer func printing with some modifications for static int and int ++
### QUESTION : 48 : String reverse with some modifications for str+2 printing
 

## Company :  VVDN -  Round - 02
### QUESTION : 47 
process vs thread
kernel compilation steps
New driver adding steps
defconfig and .config details
Typecasting and void pointer
Menuconfig and make cmds
Challenges faced in project
system calls and IPC
imp function in a device driver code
char device driver
 
### QUESTION : 46
Output of below ---->>>
{
	char *data = "abc";
	data[2] = 'd';
	printf("%c",*data);
}
Output of below ---->>>

### QUESTION : 45
```
int main(){
	int *ptr, a=10;
	ptr=&a;
	printf("%d,%d\n",*ptr,a):
	*ptr += 1;
	printf("%d,%d\n",*ptr,a);
return 0;
}
```
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
	- consecutive memory allocation
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
BOOTLOADER : Power-OFF state -- to --> OS take control
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





## Company : Innominds. Banglore.

### QUESTION : 30 : Interview Question (ref : Screenshot)
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

# Intervew Question

## Company : COMP | Round - 3 | 2.15 hr
### QUESTION : 109 : Virtual address and physical address ?
- Page table do translation of physical to virtual and vice versa.
1. Page table is 4 layers tabel (for x86 architecture)
2. | PGD | PUD | PMD | PTE | Offset |
3. PTE : Page table entry -> It have information like : page frame number, present bit, dirty bit, R/W bit, accessed bit etc.
4. PGD : Page global Directory, PUpperD, PMiddleD.
5. Every process have its own page table, PT assign when a child process is created by using fork().
6. Each process have mm_struct in kernel, mm_struct store the address of the top top-level PGD.
   struct mm_struct {
    pgd_t *pgd;
   };

7. During context switching CPU Load prcess in CPU and same process Page table in MMU.
8. Thread of same process share same address space.
9. 


## Company : QCOM | Round - 2 | 1.40 hr | Arshad | Clear

### QUESTION : 114 : Does every process have its Page table?

### QUESTION : 113 : Can we access address of Process P1, In Process P2, Can you tell technicle Background. What happened and Why? 
- Page tables are maintained per process, mapping virtual to physical memory. The OS ensures each process has a private page table, preventing direct access to another process’s memory.

### QUESTION : 112 : Implement an First in Last out cache of size = 3
```
//touch(1)
//touch(2)
//touch(5)
//touch(3) 
//display(): 3 5 2
#include <stdio.h>
//stak = [0 1 2]
//      

#define SIZE 3
int ind = 2;

void touch (int arr, int data)
{
    printf("touch()\n");
    arr[ind] = data;
    --ind;
}
void display()
{
    for (int i = 0; i < )
}

int main()
{
    printf("Hello World");
    int arr[SIZE];
//touch(1)
//touch(2)
//touch(5)
//touch(3)
    return 0;
}
```
## Company : QCOM | Round - 1 | 2.00 hr | Arshad | Clear
### QUESTION: 111 : Given a 32-bit integer, Find the set bit number.
```
#include <stdio.h>
#include <stdlib.h>
eg : 0010 = 1
    0111 = 3
    num = 0xf1      //1111 0001 = 5 set bit
    sum = 0;
    sum = sum + (num & (0x1 << n)); 
```
### QUESTION: 110 : // given an array how to find max sum array;
```
//1. sort
5,3,2,1,-1,-2

//2. reduced the array size
5,3,2,1

//3. Binary


Two pointer approch

sum 

p1 = arr[0], p2 = arr++
p2 = arr[1], p2 = arr++

1,-1,2,3,5,-2 ; ele = 6 
sol = 10 (10 = )

6 = 6,  //single element sub array
5 = 6-1,    //2 element sub array
4 = 6-2,    //3 element sub array
3 = 6-3,
2 = 6-4,
1 = 6-5,

i = 0;  //singlr ele
find the max                    

i = 1   //2 ele
p1 = arr[0], p2 = arr[1]
p1++, p2++
sum();
int max ///update if(>)

i = 2
p1 = arr[0], p2 = arr[2]
max = sum(arr,0, 2 );
{
    for(int i = p1, i <= p2; p1++)
    {
        max = max + *(arr+p1);
    }
    return max;
}
int max ///update if(>)



sub array = 21
sub array = a + (n-1) *d
ex : Sn = n/2 [a+(n-1)*d]
s = n*(n+1)/2
        

```
### QUESTION: 109 : Create a double linked list, Insert an element, and print

```
struct node
{
    struct node *next;
    struct node *prev;
    int data;
};

struct node* CreatNode(int n_count, int val)
{
    //checklist is empty
    struct node *head = NULL;
    

    for(int i = 0; i < n_count; i++)
    {
        //create node
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode == NULL)
        {
            printf("malloc() failed!\n");
            return;
        }
        newnode->data = (val--);
        newnode->next = NULL;
        newnode->prev = NULL;
        
        //update the list
        if(head == NULL)//Empty list
        {
            head = newnode;
            printf("New node added = %d\n",newnode->data);

        }
        else
        {   //List is not empty
            //Add node at first pos
            //head  n1  n2
            newnode->next = head;
            newnode->prev = head->prev;
            head = newnode;
            printf("New node added = %d\n",newnode->data);
        }
    }
    return head;   
}

void display(struct node *lptr)
{
    printf("display() : Entry\n");
    
    //check list is empty
    if(lptr == NULL)
    {
        printf("display() : List is empty\n");
        return;
    }
    //traverse through the list
    struct node *trav = lptr;
    while(trav)
    {
        printf("%d ",trav->data);
        trav = trav->next;
    }
}

int main()
{
    printf("Hello World\n");
    struct node *l1;
    l1 = CreatNode(5, 10);
    display(l1);

    return 0;
}
```

## HARMAN | Round - 4 | Clear
### QUESTION : 108 : self prefential structure
```
//self prefential structure

struct list
{

	struct list next;	//
};

```
### QUESTION : 107 : //alloacte array of 5 int and explain , and explain 
```
//alloacte array of 5 int and explain 
process p1;

int *ptr = (int *)malloc(sizeof(int) * 5);

free(ptr);

mm_struct
{
	//memory related information
}
```
### QUESTION : 106 : Endiness
```
//endinaness
int num = 0x1;	//
		100 101 102 103

if((char *)num)
	printf("Little Endina");
else
	printf("Big Endian")
```
### QUESTION : 105 : Declaration and defination, static and dynamic lib
```
	
Decl And Def

int num;	//decl
num = 10;	//


#include<stdio.h>	//declaration header file


.so 	fun def
.h	decl	--> func signiture
doc func


```
### QUESTION : 104 : Device Driver 
```

open("/dev/lcd");
write(fd, "HELLOW WORLD")



init		--> all the task wihich ONE Time, alloc major. sysfs entry, cdev struct, LCD INit


exit


struct fops
{
	open, write, ioctl
}

write_lcd

{
	LDC H/W bit operation

}

```

## Company : QCOM | smeet
### QUESTION : 103 : THREAD communication, function pointer usecase.



### QUESTION : 102 : Every element in a array have exact one copy in the same array. only one ele is unique. find that one uniqe element ? solve single loop. eg : 1 1 2 2 3 3 5
int main (void)
{
	int arr[] = {1 1 2 2 3 3 5};

	int len = sizeof(arr)/4;
	
	for(int i = 0, int j = ; i < sizeof(arr)/4;i++)				5
	{

	}
	
}

### QUESTION : 101 : Every element in a array have exact one copy in the same array. only one ele is unique. find that one uniqe element ? eg : 1 1 2 2 3 3 5
```
int main (void)
{
	int arr[] = {1 1 2 2 3 3 5};
	
	for(int i = 0; i < sizeof(arr)/4;i++)				5
	{
		for(j = 0; j < sizeof(arr)/4; j++)			5 1 1 2 2 3
		{
			if(i == j)
				continue;
			if(arr[i] = arr[j])
				break;
		}
		if(j >= sizeof(arr)/4)
			printf("Unique Elements arr[i]\n");
	}
}
```


### QUESTION : 100 : Reverse the Linked List in bunch
```
in  -> 1 2 3 4 5 6 
out -> 3 2 1 6 5 4
SLLL


void reverse_list()
{
	int temp = 0;
	
	struct node* front = head;
	struct node* prev = head;
	
	while(front -> next)
	{
		
	
}
or
//display in the bunch or three element in reverse order
void reverse_list()
{
	struct node* trav = lptr;	
	int arr[3];
	int count = 0;
	while(trav)	//1 2 3
	{
		count++;	
		
		//store linked list data in to the array;

		arr[count] == trav->data;
		trav = trav->next;

		if(count == 3)
		{
			printf("Print the array")
			count--
			count = 0
			//make array zero	
		}		 
	}
}
```

### QUESTION : 99 : SLLL Riverse the linked list ?
```
in 1 2 3 4 5
out 5 4 3 2 1

addNodeatFirst()

curr = 0 	1 2 3 4 5
curr = 1      	2 1 3 4 5
curr = 2	3 2 1 4 5
curr = 3	4 3 2 1 5
		
struct node* reverse_list(struct node *head)
{
	struct node* curr = head;
	struct node* prev = head;
	struct node* next = head;
	//head = 0x11; 	


	while(trav->next)
	{
		trav = trav->next;	//2
		next = trav->next;	//3
		
		temp = trav;

		head->next = next;	//1 -> 3	
		temp->next = head;	//2 -> 1-> 3
		head = temp;		//head 2 -> 1-> 3
	}			
	return prev	//head
}


```

## Company : Sasken Technolog | Round - 2 | 1.45 hr
### QUESTION : 98 : Datatype in 32 bit machine and 64-bit machine
```
32 - bit	2^31	~4GB
1 CPU CYCEL - 32bit data
int	4 
char	1
float	4
long	8

int *ptr	8
char *ptr	8


64 - bit	2^63
1 CPU CYCEL - 64bit data
int	8
char	1
float	8
long	16

int *ptr	8
char *ptr	8
```



### QUESTION : 97 : RAM size is limited, then which soc will you chose 32bit machine or 64bit machine ?
```
1GB RAM
1. Performance
```
### QUESTION : 96 : what is happened/diff in 32-bit and 64bit machine in after data fetch and store in register ?
```
CASE : Data -> reg, 
```
### QUESTION : 95 : Max range, Data overflow, subtraction and addition in  
```
	char num1 num2;	// -126 - 127
	char num3;
	num3 = -126;		//
	
	num1 = 127;
	num2 = 1;
	
	num1 = num1 + num2;	// It will show negative number.
	num3 = num3 - 1;	//it will go outof the range of signe char datatype
	
	//1	0000 0001
	//127  0111 1111
	//	1000 

```
### QUESTION : 94 : Function pointer and its size ?, in 32 bit and 64 bit machine, and sizeof function pointer array?  
### QUESTION : 93 : Recursive Function, with global, static, and withput global and static data ?
```
char function(int, char)
char function(int, char)
char function(int, char)
//int num;	//limit 10
int main (int)
{
	char (*funt_ptr[4]) (int, char);
	sizeof(funt_ptr);		//sizeof 8*4 byte
		
		
	if(num >= 10)
		return 0;
	main (num++);	//We can call main , it will create record/space in Stack area, after some iteration , No space will left in stack, kernel will terminate process, struct_mm 
	
	
	return 0;
}
```
### QUESTION : 92 : Thread Synchoronozation in linux
```
create 2 thread, 
t1 inc
t2 print

1. Global Data

int num;	//0


thread1()
{
	while(1)
	{	
		
		num++;		//write
		
		//signal to t2
		
		//wait for reciv signal from t2
	}
}

thread2()
{
	while(1)
	{
		signal_rec
		
		printf("%d-\n",num);		//read
		
		singal to t1
	}
}
	//Both thread in same process running , can sahre global data, 
	//1- 
	//2- 
	//3-
	//4-
	//5-

	//Both thread in same process running , can sahre global data, 
	//1-1-1, 
	//2-2-2-, 
	//3-
	//5-5-5-5-5-5...

main ()
{
	t1 = pthread_create()
	
	t2 = pthread_create()	
}

```


## Company : HARMAN | Round - 3 | 2.15 hr
### QUESTION : 91 : Measure the 4l water by using 3l and 5l jug
```
//3L

//5L

masure 4L of water 

5-3 = 2

5L 	3L
5
2

2.5 + 1.5 = 

```
### QUESTION : 90 : fetch bit packages from the packets of data
```
#define BV(x)	(1 << x)
int numTomask(int num)
{
	int temp = 0
	while(num)
	{
		temp = temp | BV(1);
		--num;
	}
	return temp;
}	
	
int main (void)
{
	char pack[256] = {...};
	int payload = 0;
	//H(2) = 0x0A0B				
	//L(2) = 0x00**
	
	int head = 0x0A0B
	int mask4 = 0xffff;
	int maskv;
	
	int temp;
	
	while(pack)
	{
		//read First 2 bytes from the packet
		temp = pack & mask4;
		if(temp == head)	//compare
		{															
			//read L
			temp = pack & (maks4 << 16);			
			maskv = numTomask(temp);
			payload = pack & (maskv << 32);			
		}
		else
		{
			pack = pack/2;
		}
	}
	return 0;
}

```
### QUESTION : 89 : Implement parking loat, park = 20 cars, car come par_id, car_reg number, //car leaving park--,
```
struct v_data{
	struct v_data *next;
	int car_reg;
	int par_id;
};

int park = 0;	//LIMIT = 20
int space = 0xfffff	//Bit wise array of 20 bit, 

int car_en(struct v_data v1)
{
	//check valid register car
	if(CAR_REG_ID == VALID)
	{
		v1.car_reg = CAR_REG_ID
				
		//chack park limit
		if(park <= 20)
		
			mutex_lock;
			park++;
			
			mutex_unlock;
			
			if(v1.car_reg == MATCH)	//match in db
			{
				//check corresponding parking id
				v1.par_id = parking_ID;	//from database
			}
			else
			{
				//make new entry
				make new node in list
				add_new_entry(struct v_data v1);
			}
		}
		else
		{
			printf("NO PARKING SPACE !!\n");
			return 0;
		}
	}
	else
	{
		printf("NOT VALID!!\n");
	}	
	return v1.par_id;	
}

void car_exit(struct v_data v1)
{
	if(v1.car_reg == VALID && v1.par_id == VALID)
	{
		//dec park variable	
		mutex_lock;
		park--;
		mutex_unlock;
		v1.par_id = 0;
	}		
}
int main (void)
{	
	return 0;
}
```
### QUESTION : 88 : Write a code two print number from 0 to 100 odd printed from t1, and even printed from t2;
```
void thread1_print()	//odd
{
	int num = 1;
	while(num <= 100)
	{
		printf("Odd Number %d\n",num);
		num = num+2;
		signal_snd(t2);
		signal_rcv(t1);
	}	
}

void thread2_print()
{
	num = 2;
	while(num <= 100)
	{
		signal_rcv(t2);
		printf("Even Number %d\n",num);
		num = num+2;
		signal(t1)
	}
}

int main (void)
{
	pthread_create(T1);	//thread - 1
	pthread_create(T2);	//thread
	return 0;
}
```
## Company : Harman | Round - 2 | CLEAR
### QUESTION : 87 : function pointer, 
### QUESTION : 86 : Constant pointer
### QUESTION : 85 : swap even and odd bit of 32-bit number. input number is 0x55 55 55 55  //0101 0101. output 1010 1010 //out = 0xaa aa aa aa


### QUESTION : 84 : //2 string str1, str2, str1 = "abc b", str2 = "bca" find the if str all char is present in str1.
```
int main (void)
{
    printf("Hello\n");
    char str1[] = "a bcd b";
    char str2[] = "a b ed";
    int len1 = sizeof(str1);    //7
    int len2 = sizeof(str2);
    printf("%d\n",len2);        //4
    int j = 0;
    for(int i = 0; i < (len2-1); i++)
    {
        for(j = 0 ; j < (len1 - 1); j++)
        {
            if(str2[i] == str1[j])  //  e == ?          b == b, a==a
            {
                //printf("%c",str2[i]);
                break;
            }
        }
        if(j == (len1-1))
        {
            printf("Failed\n");//printf("%c\n",str2[i]);
            return 0;
        }
    }
    printf("Succes\n");   
    return 0;
}
```

## Company : QUALCOMM | Round - 1 | Rejected
### QUESTION : 83 : what is Static and dynamic library ?
### QUESTION : 83 : library for user - task to be ofload to some diff thread. (eg : In a function pass another function as arguments)
//user 2 api -> work post   -> func(arg)    -> function 
//            -> work collect   -> retur check ststus -> 


int *sum_num(int num1, int num2)

thread_handler(arr[0])
{
    &sum_num(int , int);   
}
arr[] = {
        sum_num(),  //0
        sub_num(),  //1
        .
        .
        .
        
    }
}

int work_post(arr[])
{
    for()
    //create thread()
    pthread_create(..<thread_handler>,);
    
}
int work_collect()
{
}

### QUESTION : 82 : A process have 7 thread, criticel section okay to access by 5 thread in parallel, 

void criticle_sec()
{
    sem++;
    
    if == 5 -> wait
    
    int num;    //criticle section
    
    sem--;
}
### QUESTION : 81 : //Dyanic allocate memory for 4 col and 3 row
int arr[3] = {0};

int *ptr1 = (int *)malloc (sizeof(int) * 4);
arr[0] = ptr1;

 *ptr1 = (int *)malloc (sizeof(int) * 4);
arr[1] = ptr1;

 *ptr1 = (int *)malloc (sizeof(int) * 4);
arr[2] = ptr1;


### QUESTION : 80 : warpper to malloc - 4k 4096byte alligned address to 
void malloc4k(int mm_size)
{
    int page;
    size = 4096;
    mm_req = 

    int *ptr = (int *)malloc(sizeof(mm_size));
    
    int *ptr2 = (int *)malloc(sizeof(size - mm_size));
}

## Company : Harman | Round - 01 | Seleted
### QUESTION : 79 : In Linked List, Find the linke dlist node data match with given number in the function arguments, If it is find then remove that particular node form the list.

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

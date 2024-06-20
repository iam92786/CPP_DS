






deadlock condition


process - p1	-> 	

process - p2	-> 




//diff counter for each bit, have diff thresold, once each counter 
//	reach to certain thresold tak diff action like T1, T2, T3

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


//-----------------------------------------------------------------------//
//write Hello world 100 times, without using loop and go to.
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

//-------------------------------------------//

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



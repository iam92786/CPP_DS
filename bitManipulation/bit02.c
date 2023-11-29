/*
int var = 0x23;
 
out = 0x32;

*/


#include<stdio.h>


int main (void)
{
	int num = 0x23;

	int num1 = ((num & 0x0f) << 4) | ( (num & 0xf0) >> 4);

	printf("Original = %x => %x\n",num,num1);



	return 0;
}
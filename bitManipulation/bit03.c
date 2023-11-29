/*
Toggle 2th bit
int num = 0x23;
*/

#define BV(x) (1 << x)

#include<stdio.h>

int main (void)
{
	int num = 0x05;

	printf("Original = %x, new = %x\n",num, (num ^ BV(1)));

	printf("Original = %x, new = %x\n",num, (num ^ BV(1)));

	return 0;
}
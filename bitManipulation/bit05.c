/*
int in = 0x3423;
int out = 0x4332;
*/

#include <stdio.h>


int main (void)
{
	int num = 0x3423;
	printf("%x\n",num);

	int n = (num & 0x0f0f) << 4 | ((num & 0xf0f0) >> 4);

	printf("%x",n);
	return 0;
}
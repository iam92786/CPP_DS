
/*
### QUESTION : 44 : To count num of set bits in a byte. (only using bit wise operations).
*/

#include<stdio.h>
#include<stdint.h>

int main (void)
{
	//
	uint8_t num = 0x1f;
	uint8_t count;
	
	count = ((num >> 7) & 0x1) + ((num >> 6) & 0x1) + ((num >> 5) & 0x1) + ((num >> 4) & 0x1) + ((num >> 3) & 0x1) + ((num >> 2) & 0x1) + ((num >> 1) & 0x1) + (num & 0x1);
	
	printf("set bit = %d\n",count);
	
	return 0;
}

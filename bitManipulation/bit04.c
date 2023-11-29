/*
PORTC |= 0x01;  // Set bit 0 only. 
PORTC &= ~0x01; // Clear bit 0 only. 
PORTC ^= 0x01;  // Toggle bit 0 only. 
PORTC & 0x01;  // Test bit 0 only. 
PORTC |= 0x80; // Set bit 7 only. 

*/


#include <stdio.h>


#define BV(x) (1 << x)
int main (void)
{
	int num = 10;
	
	printf("Original number : %x\n",num);
	printf("Original number : %d, 1st bit SET = %d\n",num, num | BV(1));
	printf("Original number : %d, 1st bit CLEAR = %d\n",num, num & ~BV(1));

	printf("Original number : %d, 2st bit TOGGLE = %d\n",num, num ^ BV(2));
	printf("Original number : %d, 3st bit TEST = %d\n",num, num & BV(3));


	return 0;
}
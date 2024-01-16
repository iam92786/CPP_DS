#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t num8 = 0x81;
	uint8_t temp = 0x00;

	while(1)
	{
		num8 = 0x81;
		temp = 0x00;

		printf("1. %x\n", num8);

		temp = ((num8 & 0xf0) >> 1) | ((num8 & 0x0f) << 1);
		printf("1. %x\n", temp);

		temp = ((temp & 0xf0) >> 1) | ((temp & 0x0f) << 1);
		printf("1. %x\n", temp);

        	temp = ((temp & 0xf0) >> 1) | ((temp & 0x0f) << 1);
        	printf("1. %x\n", temp);
	}

	return 0;
}


/*
### QUESTION : 22 : Reverse a linked list For the given node =================================================
``` 
struct node {
  int data;
  struct node* next;
};
```
*/

//Write function for seriealizer and deseriealizer


#include <stdio.h>
#include <stdint.h>

struct ser_data
{
	uint16_t temp;
	uint16_t hdata;
};


void serial (struct ser_data *pdata, uint8_t *buf)
{
	//
	//
	buf[0] = (pdata->temp & 0xff);
	buf[1] = (pdata->temp & 0xff00) >> 8;
	
	buf[2] = (pdata->hdata & 0xff);
	buf[3] = (pdata->hdata & 0xff00) >> 8;
}

int main (void)
{
	struct ser_data s1 = {0x25, 0x755};
	//uint32_t num = 0x01234;
	
	uint8_t buf[4];
	serial(&s1, buf);
	
	//buf[0] = (num & 0xff00) >> 8;
	for (int i = 0; i < 4; i++)
	{
		printf("buf[0] = %x", buf[i]); 
	}
	
	return 0;
}

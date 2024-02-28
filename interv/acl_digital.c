

//QUESTION - 01

Input string: "1234567890"
Output:
    bcd[0]: 0x12
    bcd[1]: 0x34
    bcd[2]: 0x56
    bcd[3]: 0x78
    bcd[4]: 0x90

#include <stdio.h>
#include <stdint.h>

void bcd_to_string(char *string, uint8_t *bcd)
{
	
	for(int i = 0, int j = 0; i < 5; i++, j++)
	{
	
		string[j] = bcd[i] & 0x0f;	//j = 0 2 4 6
		j++;
		string[j] = ((bcd[i] & 0xf0) >> 4);	//j = 1 3 5 7

	}
}

void string_to_bcd(uint8_t *bcd, char *string)
{
	//
	uint8_t temp1;
	uint8_t temp2;
	
	for(int i = 0, int j = 0 ; i < 5; i++, j++)
	{
	
		temp1 = string[j] & 0x0f;	//string[0] = 1 , 3 , 5
		j++;
		temp2 = string[j] & 0x0f; 	//string[1] = 2 , 4 , 6
	
		bcd[i] = (temp1 << 4)| (temp2) ; // string[0] = 1 | string[1] = 2
	}
}



int main() {
    char bcd_string[11];
    uint8_t org_seq[5] = {0};
    uint8_t new_seq[5] = {0};

    org_seq[0] = 0x12;
    org_seq[1] = 0x34;
    org_seq[2] = 0x56;
    org_seq[3] = 0x78;
    org_seq[4] = 0x90;

    bcd_to_string(bcd_string, org_seq);

    printf("\n\nString: %s\n", bcd_string);

    string_to_bcd(new_seq, bcd_string);

    printf("\n\nGenrated BCD:\n");
    for(int i = 0; i < 5; i++)
        printf("%02x\n", new_seq[i]);

    return 0;
}

==========================================================================================
*/							
//QUESTION - 02
/*

1st data: XXXX XX11 1111 1111
2nd data: XXXX XX22 2222 2222
3rd data: XXXX XX33 3333 3333

32bit data: XX33 3333 3333 2222 2222 2211 1111 1111
					 A9	    0	
uint32_t pack(uint16_t data_1, uint16_t data_2, uint16_t data_3)

*/

#include <stdio.h>
#include <stdint.h>

int main (void)
{
	uint32_t temp = 0x3ff;	// 11 1111 1111
	uint32_t ret;		//  3   f    f

	1st data: XXXX XX11 1111 1111
	2nd data: XXXX XX22 2222 2222
	3rd data: XXXX XX33 3333 3333

	data_1 = data_1 & temp;
	data_2 = data_2 & temp;
	data_3 = data_3 & temp;

	//ret = (data_3 << 20) | ( data_2 << 10) | data_1;
	ret = data_1;

	printf("%x\n",ret);

	return 0;
}














 


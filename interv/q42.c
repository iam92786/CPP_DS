/*
### QUESTION : 42 : Reverse a string store data into dynamically alocated memory. len of string 16 bit
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main (void)
{
	char *pstr = (char *) malloc (16 * sizeof(char));
	
	//reads from standara inputs
	fgets(pstr, 16, stdin);
	printf("%s",pstr);
	printf("size = %d\n",strlen(pstr));
	
	//reverse strings
	int size = strlen(pstr);
	int j = size-2;
	char temp;
	for(int i = 0; i < size/2 - 1; i++)
	{
		//
		//printf("%d %c j = %d\n",i,pstr[j], j);
		temp = pstr[i];
		pstr[i] = pstr[j];
		pstr[j] = temp;
		j--;
	}
	
	printf("%s",pstr);

	return 0;
}

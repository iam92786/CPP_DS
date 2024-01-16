/*
### QUESTION : 34 : write a c program to delete or remove a given word from the string.
*/

#include<stdio.h>
#include<string.h>



int main (void)
{
	char str[100] = "i am soft eng from gujara";
	char wrd[16];
	printf("%s\n",str);
	printf("chose a word from the string : ");
	scanf("%s",wrd);
	
	//printf("%d %c\n",strlen(str),str[24] );
	//remove a word from the string
	
	int f_loc; 
	int l_loc = strlen(wrd);
	
	//search word location
	for(int i = 0; str[i]; i++)
	{
		f_loc = i;
		for(int j = 0; wrd[j]; j++)
		{

			if(str[i] == str[j])
			{
				printf("%c ",wrd[j]);
				i++;	
			}
			else
			{
				f_loc =0;
			}
			if(f_loc || j == 2)
			{
				break;
			}
		}
	
	}
	
	printf("f_loc : %d\n",f_loc);
	
	//remove word
	
	

	return 0;
}

/*
### QUESTION : 14 : Sort a array, array has only binary number. use only one loop 
*/

#include <stdio.h>


int main (void)
{
	int arr[] = {1,0,1,0,0,1,1,1,1,0};
	int i, j;
	//sort using single loop
	int siz = sizeof(arr)/sizeof(int);
	printf("size : %d\n",siz);	

	for(i = 0, j = siz-1; i < siz/2; i++, j--)
	{
		//printf("i = %d, j = %d\n",i,j);
		if(arr[i] == 1 )

	}

	return 0;
}



/*

	for(i = 0, j = siz-1; i < siz, j >= 0; i++, j--)
	{
		//printf("i = %d, j = %d\n",i,j);
		

	}
*/
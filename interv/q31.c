
/*

### QUESTION : 29 : Write a c program for an array using dynamic memory allocation and take user input for size and elements of array, remove duplicate elements from array and Sort the array using any sorting algo.
  
  */

#include<stdio.h>

#include<stdlib.h>

int main (void)
{
	printf("Enter a number Size : ");
	int num;
	scanf("%d",&num);

	//Dynamic memory allocation
	int *arr = (int*) malloc (num * sizeof(int));


	//take user data - array elements
	printf("Enter a elements : ");

	for(int i = 0; i < num; i++)
	{
		scanf("%d",(arr+i));
		//printf("arr[] = %d\n",arr[i]);
	}

	//remove duplicate elements
	for(int m = 0; arr[m]; m++)
	{
		for(int n = m+1; arr[n]; n++)
		{
			if(arr[m] == arr[n])
			{
				printf("Duplicate number = %d\n",arr[m]);
			}
		}

	}

	//free the Dynamic allocated memory
	free (arr);
	return 0;
}

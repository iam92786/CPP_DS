#include <stdio.h>



int main (void)
{
	int fre[10] = {0};
	int k;
	
	int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 1, 1, 1,7};
	
	printf("arr size %d\n",sizeof(arr));

	//Find the Freq of array
	for(int i = 0; arr[i]; i++)
	{
		k = arr[i];
		fre[k] = fre[k] + 1;
		printf("%d\n",fre[k]);

	}
	

	//sort 

	//display
	for(int j = 0; j < 10; j++)
	{
		//printf(" = %d\n",fre[j]);
		printf("fre[%d] = %d\n",j, fre[j]);

	}

	return 0;
}



/*
find the frequency of number in the array and sort on the based of its frequency.
```
1 2 3 2 1 3 4 5 1 1 1 7  

1 5
2 2
3 2
4 1
5 1
7 1


0 < i < 255 

0 < freq< 255

*/
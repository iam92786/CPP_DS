#include <stdio.h>

//METHOD-01
void display(int dat[])
{
	for(int i = 0; i < 10; i++)
	{
		printf("%d\t%d\n",i, dat[i]);
	}
}
int main (void)
{
	int arr[] = {1,2,3,2,1,3,4,5,1,1,1,7};
	int dat[10] = {0};
	//printf("%d\n",arr[1]);
	int len = (sizeof(arr)/sizeof(int));
	printf("%d\n",len);	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < len; j++)
		{
			//printf("i = %d  %d",i, );
			if(i == arr[j])
			{
				//printf("-> %d",arr[j]);
				dat[i] = dat[i] + 1;
			}
		}
		printf("\n");
	}
	display(dat);
	//sort
	return 0;
}

/* OUT

0	0
1	5
2	2
3	2
4	1
5	1
6	0
7	1
8	0
9	0

*/


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

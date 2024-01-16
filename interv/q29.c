
#include <stdio.h>
#include <stdlib.h>
//2D Arrays (row, col) using dynamic memory allocation

int main (void)
{
	//2D Array, r = 3 c = 4
	int r = 3, c = 4;
	int **mat = (int**) malloc(r * sizeof(int));
	for(int i = 0; i < r; i++)
	{
		//
		printf("%d\n",i);
		mat[i] = (int *) malloc (c * sizeof(int));
	}
	
	//take data from the user
	for(int i = 0; i < r; i++)
	{
		for(int j = 0;j < c; j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}

	for(int i = 0; i < r; i++)
	{
		for(int j = 0;j < c; j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i < r; i++)
	{
		free(mat[i]);
	}
	
	
	free(mat);
	return 0;
}









/*
//2D Arrays (row, col) 
void display(int arr2[][3])
{
	int row = 3;
	int col = 3;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("arr[][] = %d",arr2[j][i]);
		}
		printf("\n");
	}
}
int main (void)
{
	int arr2[][3] = { {11,12,13,}, 
				{21,22,23}, 
				{31, 32, 33}};
					
	display(arr2);


	return 0;
}
*/


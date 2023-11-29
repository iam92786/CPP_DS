#include <stdio.h>
/*
BUBBLE = SORTING USING SINGLE LOOP
*/

int main (void)
{
    //int arr[] = {11,33,55,22,66,88,44,33,22};
    int arr [] = {0,1,1,0,1,0,1,0,0,1,};
    int size = sizeof(arr)/sizeof(int);
    int temp;


    printf("size od Array = %d\n",size);

    for(int i = 0; i < size ; i++)
    {
        //printf("%d\n",arr[i]);
        if(arr[i] > arr[i+1])
        {
            //printf("   %d\n",arr[i]);
            //ascending order  --> swap
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i = -1;
        }

    }

    printf("Sorted Array :\n");
    for(int i = 0; i < size ; i++)
    {
        printf("%d\n",arr[i]);

    }




    return 0;
}
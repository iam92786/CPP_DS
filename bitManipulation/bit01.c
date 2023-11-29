#include<stdio.h>

void display(int num);

int main (void)
{
	int num;
	printf ("Enter a Number : ");
	scanf("%d",&num);

	display(num);

	return 0;
}

void display(int num)
{
	printf("sizeof = %d\n",sizeof(num));
	
	while(num)
	{
		printf("%d\n",num%2);
		num = num/2;
	}
}





#include <stdio.h>

int add (int a, int b)
{
	return a+b;
}

void print (void)
{
	printf("PRINT");
}

int main (void)
{
	void (*pprint) (void) = &print;
	pprint();

	int (*padd)(int, int) = &add;
	int ret = padd(5,5);
	printf("add() = %d\n",ret);


	return 0;
}



/*
PRACTICE:
void print (int a);

int main (void)
{
	int (*ptr_func) (int) = &print;
	return 0;
}

*/

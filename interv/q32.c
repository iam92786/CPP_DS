/*
### QUESTION : 32 : Write a code for Stack implementation and its functionalites. STATIC STAKE
*/


#include <stdio.h>

//stack

#define SIZE 5

struct stack
{
	int top;
	int arr[SIZE];
};

void stackInit (struct stack *s1)
{
	s1->top = -1;
}

int stackEMpty(struct stack *s1)
{
	//
	if(s1->top == -1)
		return 1; //true - empty
	else
		return 0;	//
}

int stackFull(struct stack *s1)
{
	//
	if(s1->top == SIZE - 1)
		return 1; //true full
	else
		return 0;
}

void stackPush (struct stack *s1, int ele)
{
	//
	s1->top++;
	s1->arr[s1->top] = ele;
	printf("%d push into stack \n",ele);
}

void stackpop (struct stack *s1)
{
	s1->top--;
	printf("%d ele Pop into stack \n",s1->arr[s1->top]);
}

void stackTop (struct stack *s1)
{
	printf("Stack Top : %d\n", s1->arr[s1->top]);
}
int main (void)
{
	struct stack s1;
	stackPush(&s1, 10);
	stackPush(&s1, 20);
	stackPush(&s1, 30);
	stackTop(&s1);
	stackPush(&s1, 40);
	stackTop(&s1);
	stackpop(&s1);
	stackTop(&s1);

	return 0;
}

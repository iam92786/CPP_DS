/*
### QUESTION : 33 : write a code for circular queue, and its functionality. STATIC QUEUE

*/


#include<stdio.h>
#define SIZE 5

struct queue
{
	int arr[SIZE];
	int re;
	int fr;
};

void queueInit(struct queue *q1)
{
	q1->re = -1;
	q1->fr = -1;
}

int queueEmpty(struct queue *q1)
{
	if(q1->re == -1 || q1->fr > q1->re)
		return 1;
	else
		return 0;
}

int queueFull(struct queue *q1)
{
	if(q1->re == SIZE-1)
		return 1;
	else
		return 0;
}

void enqueue(struct queue *q1, int ele)
{
	q1->re++;
	q1->arr[q1->re] = ele;
	
	if(q1->fr == -1)
		q1->fr = 0;
}

void dequque(struct queue *q1)
{
	q1->fr++;
}

void getFront(struct queue *q1)
{
	printf("Queue get front %d\n",q1->arr[q1->fr]);
}

int main (void)
{
	struct queue q1;
	queueInit(&q1);
	
	enqueue(&q1, 10);
	enqueue(&q1, 20);
	enqueue(&q1, 30);
	enqueue(&q1, 40);
	getFront(&q1);
	dequque(&q1);
	getFront(&q1);

	return 0;
}






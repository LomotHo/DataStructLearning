#include <stdio.h>
#include <stdlib.h>
#define MaxSize 5

typedef int ElemType;
typedef struct Queue {
	ElemType data[MaxSize];
	int front, rear;	
}Queue;

bool initQueue(Queue &Q) {
	Q.front = 0;
	Q.rear = 0;
	return true;
}

bool enQueue(Queue &Q, ElemType data) {
	if ((Q.rear + 1)%MaxSize == Q.front) {
		return false;
	}
	Q.data[Q.rear] = data;
	Q.rear = (Q.rear + 1)%MaxSize; 
	
	printf("in: %d\n", data);
	return true;
}

bool deQueue(Queue &Q, ElemType &data) {
	if (Q.front == Q.rear) {	// empty queue
		return false;
	}
	// else if ((Q.front+1)%MaxSize == )
	// {
	// 	 code 
	// }
	data = Q.data[Q.front];
	Q.front = (Q.front + 1)%MaxSize;
	
	printf("out: %d\n", data);
	return true;
}

void printQueue(Queue Q){
	for (int i = 0; i < MaxSize; ++i) {
		printf("%4d", Q.data[i]);
	}
	printf("front: %d | ", Q.front);
	printf("rear: %d", Q.rear);
	printf("\n");
}

int main(int argc, char const *argv[])
{
	Queue Q;
	ElemType out;
	initQueue(Q);
	enQueue(Q, 5);
	enQueue(Q, 7);
	enQueue(Q, 77);
	enQueue(Q, 9);
	// enQueue(Q, 10);
	// printQueue(Q);
	// printf("in: %d\n", Q.data[Q.front]);

	deQueue(Q, out);
	deQueue(Q, out);
	// deQueue(Q, out);
	deQueue(Q, out);
	enQueue(Q, 77);
	enQueue(Q, 9);
	// enQueue(Q, 77);
	enQueue(Q, 9);
	deQueue(Q, out);
	printQueue(Q);


// 	printf("%d\n", Q.data[3]);
	return 0;
}

#ifndef bfs_h
#define bfs_h
#include "bbq.h"

// Queue implementation goes here
typedef struct q {
	int size;
	Tree * values;
	int enqIndex;
	int deqIndex;
} * QueueRep;

void initq(int size, Queue q);
int sizeq(Queue q);
Tree dequeue(Queue q);
void enqueue(Tree t);

#endif

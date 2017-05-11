#ifndef bfs_h
#define bfs_h
#include "bbq.h"

// Queue implementation goes here
typedef struct q {
	int size;
	Tree * values;
	int enqIndex;
	int deqIndex;
} * Queue;

void initq(int size, Queue q);
void initq(int size, Queue q);
void initq(int size, Queue q);

#endif

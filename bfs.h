#ifndef bfs_h
#define bfs_h
#include "bbq.h"

// Queue implementation goes here

typedef struct q {
	int size;
	Node * values;
	int enqIndex;
	int deqIndex;
} * Queue;

#endif

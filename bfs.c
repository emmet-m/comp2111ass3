#include <stdlib.h>
#include <stdio.h>
#include "bbq.h"
#include "bfs.h"

/* Search function, where:
 * t is our tree 
 * N is our max size
 * k is our node k value we search for	
 * v is a pointer to the found node with key k
 */
void search (Tree root, unsigned int N, Key key, T *val, RetVal *found) {
	// Declare our circular buffer and two counters
	Tree A[N+1]; int n; int m;
	n = 0; m = 0;
	// Set the initial value of the array
	A[n] = root;
	// Increment n and set found
	n = (n + 1) % (N + 1);
	*found = Failure;
	// While nothing is found or our queue is empty
	while (! (*found || m == n)) {
		// take our top element
		Tree e = A[m];
		// remove it from the queue
		m = (m + 1) % (N + 1);
		// Check if we've found our value
		if (cmpKey(key, e->id)) {
			*val = e->val;
			*found = Success;
		// Add successors otherwise
		} else {
			List succ = e->list;
			while (succ != NULL) {
				// Add the successor and increment list
				A[n] = succ->n; n = (n + 1) % (N + 1);
				succ = succ->next;
			}
		}
	}
}

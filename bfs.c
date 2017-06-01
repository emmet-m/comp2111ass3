#include <stdlib.h>
#include "bbq.h"
#include "bfs.h"

/* Search function, where:
 * t is our tree 
 * N is our max size
 * k is our node k value we search for	
 * v is a pointer to the found node with key k
 */
void search (Tree root, unsigned int N, Key key, T *val, RetVal *found) {
	Tree A[N+1]; int n; int m;
	n = 0; m = 0;
	A[n] = root;
	n = (n + 1) % N + 1;
	found = Failure;
	while (! (found || m == n)) {
		Tree e = A[m];
		m = (m + 1) % N + 1;
		if (cmpKey(key, e->id)) {
			*val = e->val;
			*found = Success;
		} else {
			List succ = e->list;
			while (succ != NULL) {
				A[n] = succ->n; n = (n + 1) % N + 1;
				succ = succ->next;
			}
		}
	}
}

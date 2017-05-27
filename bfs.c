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
	Queue q;
	initq(N, q);
    enqueue(root);
	found = Failure;
	while (! (isEmpty(q) || found)) {
		Tree n = dequeue(q);
		if (cmpKey(key, n->id)) {
			*val = n->val;
			*found = Success;
		} else {
			List curr = n->list;
		}
	}
}

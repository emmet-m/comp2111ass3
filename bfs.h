#ifndef bfs_h
#define bfs_h
#include "bbq.h"
/* Search function, where:
 * t is our tree 
 * N is our max size
 * k is our node k value we search for	
 * v is a pointer to the found node with key k
 */
void search (Tree root, unsigned int N, Key key, T *val, RetVal *found);

#endif

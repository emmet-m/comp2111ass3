
/* Search function, where:
 * t is our tree 
 * N is our max size
 * k is our node k value we BFS for	
 * v is a pointer to the found node with key k
 */
void BFS (Tree root, unsigned int N, Key key, T *val, RetVal *found) {
	Queue q;
	initq(N, q);

	while (sizeq(q) != 0) {
		Tree n = dequeue(q);
		if (cmpKey(key, n->id)) {

		}
	}
}

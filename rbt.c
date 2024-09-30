/*
RED BLACK TREE
*/

/*
RBT are a self balancing BST, where each note is either red or black and all notes must follow a particular property to be considered balanced
*/

/*
Properties of RBTs

- Every node is either red or black
- The root node is always black
- Black height (The number of black nodes from the roots to the nill nodes are equal for all sub-trees)
- Red-Red violation, no two consecutive red node
- New nodes are always inserted as red.
- All nill node must be black
- It must be a BST meaning all nodes in the left sub-tree must be less than their parents and all nodes in the right sub-tree must be greater than their parents
*/

/*
Time complexity is O(log n)
Insertion starts by performing a normal BST insertion always inserting with a red node and checking for balancing
*/
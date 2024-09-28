/*
BST
A BST is a special type of binary tree that follows specific rules or conditions. These conditions ensure that the tree maintains an order that allows for efficient searching, insertion and deletion operation
*/

/*
Conditions for a tree to be BST
- For every node N in the tree: All nodes in the left subtree of N must have values less than the values of N and all nodes in the right subtree of N must have values greater than the value of N
meaning that all sub-trees must be binary search trees
- Unique values: Generally in a BST, each node contains a unique value, duplicate values are not allowed
- No cycles: A tree cannot have cycles, no node can point back to its parents
- Height Balance (Applicable in RBT and AVL trees)
- Traversal Consistency:
*/



/*
Conditions for RBT
A RBT is a special type of BST that adds extra properties to ensure the tree remains balanced, which allows for efficient operation (search, insert, delete in O(logn))

- Every node is either red or black: 
- The root node is always black
- No two red nodes can be adjacent (red node cannot have red children)
- Every path from a given node to its descendant NULL nodes (or leaf nodes) must have the same number of black node (black height)
- New node are inserted as red node
*/

/*
Deleting from a binary search tree.
List and shortly explain all cases when deleting a node from a binary search tree and write down the Pseudocode 
for a binary search tree, the delete case " deleted node z has both children and Successor(z)=z.right.

When deleting a node from BST, there are three cases to consider. Each case is based on how many children the node to be deleted has.

1st case:
The node to be deleted has no child (leaf node): simply remove the node by adjusting its parents to point to null.

2rd case:
Then node to be deleted has one child(either left or right child)
Replace the node with its child by making the parent of the node point to its child.

3rd case:
The node to be deleted has two children
- Find the in-order succcessor (smallest node in the right subtree or in-order predecessor (largest node in the left subtree of the node to be deleted.
- Replace the value of the node to be deleted with the successor/predecessor value.
- Delete the sucessor/predecessor node (which will have at least one child, going back to 1st or 2rd case)
*/

/*
DELETING NODE Z HAS TWO CHILDREN AND SUCESSOR Z = Z.RIGHT

*/
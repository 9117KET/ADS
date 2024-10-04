/*
DATA STRUCTURE (DS)

This is a way of organizing, managing and storing data in a way that allows for efficient access, and modification.

Types:
Linear DS: elements are arranged in a sequential manner and each element is connected to the previous and next element (except for the first and last element)
    Examples:
        Arrays: a collection of elements stored in contiguous memory location
        Linked Lists: A linear collection of elements where each element (node) has a pointer which points to either the next or previous element depending on the type
            We have single, double and circular link list
        Stack: A last in first out (LIFO) structure where the most recent element added is the first to be removed
        Queues: A first-in-first-out (FIFO) structure where the earliest element added is the first element to be removed
Non-Linear DS: No sequential form of elements, elements may have multiple relations between each other
    Example:
        Trees: A hierarchical structure consisting of nodes, with each node having zero or multiple child node
            Binary Tree: a tree where each node has at most two children
            Binary Search Tree: A binary tree where the left child node's value is less than the parent, and the right child nodes is greater than the parent
            AVL Trees: A self-balancing search tree.
        Graphs: A collection of nodes (vertices) connected by edges, graphs can be directed or undirected and can represent networks, such as social connections or routing paths

Operations on DS
- Insertion: adding an element to a DS
- Deletion: removing an element from a DS
- Traversal: Accessing each element in a DS
- Search: Looking for a specific element in a DS
- Sorting: Arranging the elements in a particular order (ascending or descending)

Common DS and their applications:
- Arrays:
    Used for constant time access to elements.
    Ideal for tasks like storing multiple elements of the same type, such as a list of student scores.
    Fixed size, so resizing may be inefficient.
- Linked Lists:
    Great for dynamic collection where elements are frequently inserted or deleted.
    Used in implementing stacks and queues, or when dealing with dynamic memory management.
- Stacks:
    Used for problems requiring the reversal of data, like undo operations, parsing expressions or function call management.
- Queues:
    Used for tasks requiring a first come first serve process like a scheduling task, printing documents, or managing server requests.
- Trees:
    Used in hierarchical data storage, such as file systems and databases
    Binary Search Trees: ideal for fast search, insertion, and deletion operations.
- Graphs:
    Useful for representing networks, like social media relationships transportation routes, and internet connections.

*/


/*
QUESTIONS: Answer true/false

Traversal is a basic operation of a queue.
Answer: False
Explanation: The basic operations of a queue are enqueue (insertion) and dequeue (removal). 
Traversal is not typically considered a basic operation for a queue because queues operate on a First-In-First-Out (FIFO) principle, 
and you only access the front element in most implementations. Traversing through a queue would violate its standard access pattern.

The average time complexity in case of insertion in a balanced binary search tree is O(log n).
Answer: True
Explanation: In a balanced binary search tree (like an AVL tree or a Red-Black tree), the average and worst-case time complexity for 
insertion is O(log n), as the tree is balanced, and the depth of the tree is kept proportional to log n, ensuring that insertion (which depends on tree height) remains efficient.

FIFO is the principle governing the data structure queue.
Answer: True
Explanation: FIFO (First-In-First-Out) is the primary principle behind a queue. In a queue, the element that is inserted first is the one that is removed first, similar to how people are served in a line.

Searching for an element in a stack is faster than searching for an element in a balanced binary search tree.
Answer: False
Explanation: Searching in a stack involves checking each element one by one (in O(n) time), as stacks do not support fast searches due to their LIFO nature. On the other hand, searching in a 
balanced binary search tree has a time complexity of O(log n) on average because the tree is organized in a way that allows for efficient searching based on the ordering of elements. 
Therefore, searching in a balanced binary search tree is generally faster than searching in a stack. 

Traversal is a basic operation of a stack.
Answer: False
Explanation: The basic operations of a stack are push (insertion), pop (removal), and sometimes peek (viewing the top element). Traversal is not typically considered a basic operation for a stack, 
as stacks are based on LIFO (Last-In-First-Out) order and only allow access to the top element.

The average time complexity in case of insertion in a balanced binary search tree is O(log n).
Answer: True
Explanation: In a balanced binary search tree (like an AVL tree or a Red-Black tree), the average and worst-case time complexity for insertion is O(log n) because the tree's height is kept 
proportional to log n, allowing for efficient insertion.

LIFO is the principle governing the data structure queue.
Answer: False
Explanation: LIFO (Last-In-First-Out) is the principle governing a stack, not a queue. A queue operates on a FIFO (First-In-First-Out) principle, where the first element added is the first one removed.

In a singly linked list, traversing the list from the tail to the head is a basic operation.
Answer: False
Explanation: In a singly linked list, each node only points to the next node, so you cannot traverse backwards from the tail to the head. You would need a doubly linked list to do that.

The time complexity for inserting an element at the beginning of a linked list is O(1).
Answer: True
Explanation: In a linked list, insertion at the head (beginning) is done in constant time O(1) since no shifting of elements is needed, unlike in arrays.

Inserting an element in the middle of an array is generally faster than inserting an element in the middle of a linked list.
Answer: False
Explanation: Inserting into the middle of an array requires shifting all subsequent elements, which takes O(n) time. In a linked list, insertion takes O(1) time, once you have a pointer to the correct position.

The depth of a complete binary tree with n nodes is O(log n).
Answer: True
Explanation: A complete binary tree has all levels filled except possibly the last, which makes its height proportional to log n, where n is the number of nodes.

A stack can be implemented using two queues.
Answer: True
Explanation: It is possible to implement a stack (LIFO) using two queues (FIFO) by carefully controlling how elements are inserted and removed between the two queues.

In a min-heap, the parent node is always smaller than its child nodes.
Answer: True
Explanation: In a min-heap, the parent node is always smaller than its child nodes, ensuring that the smallest element is at the root of the heap.

The time complexity for searching in a hash table with no collisions is O(1).
Answer: True
Explanation: In an ideal hash table with no collisions, searching for an element can be done in constant time O(1) by directly accessing the indexed bucket.

A doubly linked list requires more memory than a singly linked list.
Answer: True
Explanation: A doubly linked list requires additional memory for the extra pointer to the previous node, making it more memory-intensive than a singly linked list, which only requires one pointer per node.

In a binary search tree, the right child of a node contains values greater than the node’s value.
Answer: True
Explanation: In a binary search tree (BST), by definition, the right child of a node contains values greater than the node’s value, and the left child contains values less than the node’s value.

In a graph, a depth-first search (DFS) will always find the shortest path between two nodes.

Answer: False
Explanation: DFS explores a graph by going as deep as possible along a branch before backtracking, but it does not guarantee finding the shortest path. 
Breadth-first search (BFS) is typically used to find the shortest path in unweighted graphs.
*/
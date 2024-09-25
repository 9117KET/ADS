/*
A sentinel is a dummy node that act as a placeholder often serving as both the head and the tail of a list in circular linked list 
That is the the tail's next pointer points to the head and the head's previous pointer points to the tail.

- Sentinels eliminates the need of handling edge cases because the list always have at least one node.
- In circular double linked list, the sentinel node's next pointer points to the real node and the sentinels prev pointer point to the last real node.
The last node node's next also points to the sentinel and the first node's prev points to the sentinel. Easing traversal
- Eliminates null checks
*/

/*
NULL<->56<->NULL
prev........next


*/

/*
Inserting a node at the end of a double circular linked list

function insertAtEnd(list, newValue):
    //create a new node
    newNode = createNode(newValue)

    //Set last as the node before the sentinel (the tail)
    last = list.sentinel.prev

    //Linked the new node
    newNode.next = list.sentinel //new node points to the sentinel (end of the list)
    newNode.prev = last         //new node's previous pointer points to the last node

    //update the last node's next pointer and sentinel's previous pointer
    last.next = newNode         //last node's next points to the new node
    list.sentinel.prev = newNode//Sentinel's previous points to the new node

    #insertion is complete
end function

*/

/*
Inserting at the beginning is exactly the same as above, the different is that.
//first = list.sentinel.next //since the sentinel is always going to be present, we set 'first' node after the sentinel

To better understand this, always make a small sketch with three nodes contain pointers.
*/

/*
Inserting at any point

our function will contain another parameter called position
*/
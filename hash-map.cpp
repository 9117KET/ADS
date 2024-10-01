/*
A hash table also known as a hash map is a data structure that stores key-value pairs and provide efficient insertion, deletion and lookup operation:
The efficiency of a hash function is based on a hash function

- Hash function: takes a key and converts it into a specific index within the table. the index determines where the corresponding value will be stored.
e.g: hash(key) = key % table_size
- Collision: Occurs when two different keys produce the same hash index. 
- Collision resolution are techniques to handle collision in hash values
- Collision resolution technique: 
    - Chaining: each index points to a linked list of entries that hash to the same index.
    - Open Addressing: when a collision occurs, a different index is found using probing (Linear, quadratic or double hashing)
- Load Factor


The general formula for a hash function is:
h(k,i) = (h'(k) + i)%m
where h'(k) = (k+7)%m is the initial hash function
i is the number of probes(collisions encountered)
m = 13 (the size of the hash table)
k is the key to be inserted

if we are given a table to fill in the key value pairs, then we initially start with i=0 if there is no collision, we continue to the next element and if any collision occurs we move on to i=1 and so on
provided we are using linear probing
*/


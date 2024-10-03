/*
Stable sorting Algorithm
An algorithm is stable if it ensures that for all elements i and j in an input array where i < j and A[i]=A[j], the position of A[i] will come first before the position of A[j]
in the output array.

In-situ sorting algorithm (in-place) this algorithm operates directly on the input data and require 0(1) additional memory. it doesn't uses any significant additional 
memory for sorting.

The above array uses additional arrays C[] and B[]
*/

/*
Reference "Review 2 ADS"
The algorithm is the above questions is stable because it process elements in a way that keeps it relative order in the output with elements having equal keys (n down to 1)

The algorithm is not in-situ because it uses additional arrays like C[] and B[], which means it require additional memory for sorting
*/

/*
If the loop is changed from 1 to n and not from n to 1, the stability will be affected because order of the elements with the same keys will change
The in-situ property will not change since it require additional memory through the arrays C[] and B[]
*/

//Can always state  an example of elements with keys in an input then show how the output is either stable or not.
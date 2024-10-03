/*
PROBLEM ANALYSIS

We are ask analyze the quicksort algorithm based on a given partitioning algorithm
The question require us to...
-Create an array that results in the most swaps
-Determine how many function calls of Quicksort are made
-Calculate the number of swaps made.
*/

/*
Our partitioning algorithm that was given to us uses the first element as the pivot and rearranges the array element around it
*/


/*
Partition(A, pivot, end):
    x := A[pivot]       //x is the pivot value
    i := pivot          //i is initially set to pivot index
    for j := pivot + 1 to end:
        if A[j] <= x then
            i := i + 1
            exchange A[i] and A[j]
    exchange A[pivot] and A[i]
    return i
*/

/*
From our question, we see that the pivot is always the first element in our array or sub-array and this will ensure getting maximum swaps
The algorithm partitions the array such that elements smaller than the pivot are on the left and elements larger than the pivot are on the right
Swaps are made to move elements around the pivot as necessary
AFter the loop completes, the pivot is swapped with the element at position i
*/


/*
Q1: Create an array containing the value 1,2,3,4,5,6 such that the quicksort algorithm performs the most swaps.
Strategy: In the worst-case scenario for quicksort, the algorithm performs the most swaps when it repeatedly chooses the smaller or largest element as the pivot. In this case
the array should be reverse sorted (ie, in descending order) so that every partitioning step forces multiple swaps to happen.

Q2: How many function calls of quicksort are performed?
This means we have to determine the number of recursive function calls
For an array of size n, the total number of function calls is 2n-1. For an array of size 6, then the function call will be 11.

Strategy: Quick sort recursively divides the array into smaller sub-arrays and sorting each one.
The number of recursive calls is determine by how the array is divided.
In the worst case (reverse-sorted array), the algorithm will make n function calls for an array of size n because each partition step reduces the array size by 1.

Q3: How many swaps are made?
During the partitioning, if an element needs to be moved to the other side of the pivot, it is swapped with another element. The number of swaps will be highest when the
array is in descending order, as more elements will be needed to be swapped to place them in the correct position relative to the pivot.
*/

/*
For an array of size n=6, the total number of swaps in the worst case will be n-1 + n-2 + n-3 + ... + 2 + 1
n=6 we will have 
6+5+4+3+2+1=15
*/

/*
For the best case scenario, we turn to minimize the number of swaps.

The number of function calls for the quicksort doesn't change in the best case. It still makes a call for every sub-array, even when the array is already sorted. 11

Number of swaps:
the pivot is still swapped with itself from the partition function for pivot 1, is swapped with itself, 2, is swapped with itself and so on...
*/

/*
QuickSort

Best Case:
Occurs when the pivot always splits the array into two equal halves.
Time complexity: O(nlogn)
number of swaps: minimal (self-swaps for pivot elements)
number of comparisons: O(nlogn)

Worst Case
Occurs when the pivot is always the smallest element or the largest element and also in reverse sorted array order.
Time complexity: O(n^2)
Number of swaps: maximum (in reverse sorted array, many elements need to be swapped)
number of comparisons: O(n^2)

Note: QuickSort is an in-place sorting algorithm meaning no extra memory is required but its performance heavily depends on the pivot
*/
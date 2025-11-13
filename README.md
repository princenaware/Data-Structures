# Data Structures
### Author - Prince Naware
This is a list of few topics related to Data structures and their theory, syntax , algorithm and Conclusion.  
# Linear Search (Sequential Search)
## Aim : Write a program to conduct Linear search for a Key element over an array of n integer’s elements. Report Success or failure with appropriate message.
## Theory
Linear search (also called sequential search) is a simple searching algorithm used to find a given element in a list. It checks each element of the list sequentially until the desired element is found or the list ends. Linear search works on both sorted and unsorted arrays but is less efficient on large datasets compared to binary search.

When to use:
- Small arrays or lists.
- When the array is unsorted and sorting is more expensive than linear search.

Pros:
- Simple to implement.
- Works on unsorted data.

Cons:
- Inefficient for large data (O(n) time complexity).

## Syntax (C)

A typical linear search in C uses a loop to iterate over array elements and compare each element with the key:

```c
for (i = 0; i < n; i++) {
    if (arr[i] == key) {
        // found at index i
        break;
    }
}
```

Function-like signature (conceptual):

int linear_search(int arr[], int n, int key) // returns index or -1 if not found

## Algorithm (step-by-step)

1. Start from the first element of the array.
2. Compare the current element with the search key.
3. If they match, return the current index (element found).
4. If not, move to the next element.
5. Repeat steps 2–4 until the last element.
6. If no element matches the key, report that the element is not found.

### Pseudocode

1. input n, array arr[0..n-1], key
2. for i from 0 to n-1
3.    if arr[i] == key
4.       print "key is present at index i"
5.       exit
6. end for
7. print "key is not present in the array"

## Program (C)

Below is the exact program from `linearsearch.c` in this repository:

```c
#include <stdio.h>
int main() {
    int arr[100],n,key,i; 
    int found = 0; 
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter %d integer:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d is present at index %d.\n", key, i);
            found = 1; 
            break;     
        }
    }
    if (found == 0) {
        printf("%d is not present in the array.\n", key);
    }
    return 0;
} 
```

## Sample Outputs

Below are two example runs demonstrating the program input and output. The exact prompts printed by the program are included.

Example 1 — key present

Input (user types after prompts):

```
Enter the number of elements in the array : 5
Enter 5 integer:
10
25
30
45
50
Enter the element to search: 30
```

Output (program prints):

```
30 is present at index 2.
```

Example 2 — key not present

Input:

```
Enter the number of elements in the array : 4
Enter 4 integer:
2
4
6
8
Enter the element to search: 5
```

Output:

```
5 is not present in the array.
```

## Complexity Analysis

- Time complexity: O(n) in the worst and average case (you may need to examine every element). Best case is O(1) if the key is at the first position.
- Space complexity: O(1) (only a fixed amount of extra memory is used).

## Conclusion
Linear search is a straightforward method to locate an element in an array by checking elements one-by-one. It's easy to implement and useful for small or unsorted datasets. For large sorted datasets, consider faster algorithms like binary search (O(log n)), but linear search remains useful when data isn't sorted or when simplicity is preferred.

## Notes
- This implementation reads values from standard input and prints the index of the first occurrence of the key (0-based indexing). If you need the last occurrence or all occurrences, modify the loop logic accordingly.
- Ensure `n` does not exceed the fixed array size (100) used in this program; otherwise, consider dynamic allocation or increasing the array size.

---

File: `linearsearch.c` (same directory as this markdown)

# Binary Search
## Aim: Write a program to conduct Binary search for a Key element over an array of n integer’s elements. Report Success or failure with appropriate message.

## Theory
Binary search is an efficient algorithm for finding the position of a target value within a sorted array. It repeatedly divides the search interval in half: compare the target value to the middle element of the array; if they are not equal, decide which half of the array the target must lie in, then continue the search in that half. Because the search space halves each step, binary search runs in logarithmic time.

Requirements:
- The array must be sorted (ascending or descending, but algorithm adapts accordingly).

Pros:
- Much faster than linear search on large, sorted data sets (O(log n)).

Cons:
- Requires random access (arrays) and sorted data.

## Syntax (C)
A typical while-loop based binary search in C:

```c
int left = 0, right = n - 1;
while (left <= right) {
    int mid = (left + right) / 2; // or left + (right-left)/2 to avoid overflow
    if (arr[mid] == key) return mid;
    else if (arr[mid] < key) left = mid + 1;
    else right = mid - 1;
}
// not found
return -1;
```

Function-like signature (conceptual):

int binary_search(int arr[], int n, int key) // returns index or -1 if not found

## Algorithm (step-by-step)
1. Set left = 0 and right = n-1.
2. While left <= right:
   a. Compute mid = (left + right) / 2.
   b. If arr[mid] == key, return mid (found).
   c. If arr[mid] < key, set left = mid + 1 (search right half).
   d. Else set right = mid - 1 (search left half).
3. If the loop ends without finding the key, return -1 (not found).

### Pseudocode

1. input n, array arr[0..n-1] sorted ascending, key
2. left = 0, right = n - 1
3. while left <= right
4.    mid = (left + right) / 2
5.    if arr[mid] == key then print index mid and exit
6.    else if arr[mid] < key then left = mid + 1
7.    else right = mid - 1
8. print "Element not found"

## Program (C)

Below is the exact program from `binarysearch.c` in this repository:

```c
#include <stdio.h>

int main()  {
    int arr[100], n, key, i;
    int index = -1; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int left = 0, right= n-1;
    printf("Enter %d integers in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            index = mid;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
    
}
```

## Sample Outputs

Example 1 — element present

Input (user types after prompts):

```
Enter the number of elements in the array: 6
Enter 6 integers in ascending order:
5
10
15
20
25
30
Enter the element to search for: 20
```

Output (program prints):

```
Element found at index: 3
```

Example 2 — element not present

Input:

```
Enter the number of elements in the array: 5
Enter 5 integers in ascending order:
2
4
6
8
10
Enter the element to search for: 7
```

Output:

```
Element not found
```

## Complexity Analysis
- Time complexity: O(log n) in the average and worst case (because the search space halves each iteration). Best case O(1) when the middle element is the key.
- Space complexity: O(1) (only a few extra variables used).

## Conclusion
Binary search is ideal for fast lookups in sorted arrays. It reduces time complexity significantly compared to linear search but requires the data to be sorted and indexed. For very large arrays or repeated searches, binary search (or variants like interpolation search for uniformly distributed data) is recommended.

## Notes and Improvements
- Use `int mid = left + (right - left) / 2;` to avoid potential overflow when using very large indexes.
- The current program reads `n` integers into a fixed-size array of 100 elements—ensure that `n <= 100` or switch to dynamic allocation.
- For a reusable implementation, consider writing `binary_search` as a function that returns the index.

---

File: `binarysearch.c` (same directory as this markdown)

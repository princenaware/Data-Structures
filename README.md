# Data Structures
# Linear Search (Sequential Search)

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


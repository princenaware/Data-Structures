/*Aim: To implement Selection Sort algorithm in C.
----------------------------------------------------------------------------------------
Selection Sort is an in-place comparison sorting algorithm that divides
the input list into two parts: a sorted and an unsorted region. 
It repeatedly selects the smallest (or largest, depending on sorting order)
element from the unsorted region and moves it to the end of the sorted region.
The algorithm maintains two subarrays within the original array: one that is 
already sorted and one that is unsorted. The process continues until the entire
array is sorted.
*/

#include <stdio.h>

int main() {

    int arr[100], n, i, j, min, swap;

    // Take number of elements
    printf("Enter the number of Elements : ");
    scanf("%d", &n);

    // Take array input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array before sorting
    printf("Array before sorting:\n ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Selection Sort logic
    for(i = 0; i < n-1; i++) {
        min = i;  // Assume current index is minimum

        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[min])   // Find the actual minimum
                min = j;
        }

        // Swap smallest element with current position
        swap = arr[min];
        arr[min] = arr[i];
        arr[i] = swap;
    }

    // Display array after sorting
    printf("\nArray after sorting:\n ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSUCCESSFULLY SORTED USING SELECTION SORT\n");

    return 0;
}

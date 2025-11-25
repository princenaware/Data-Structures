// Aim: To implement Shell Sort algorithm in C language 
// and sort an array of integers.
// Date: 2024-06-15
#include<stdio.h>

int main() {
    int arr[100], n, i, j, gap, temp;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array before sorting
    printf("Array before sorting:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Shell Sort algorithm
    // Start with a big gap and reduce the gap each iteration
    for(gap = n/2; gap > 0; gap /= 2) {

        // Perform gapped insertion sort for this gap size
        for(i = gap; i < n; i++) {
            temp = arr[i];  // element to be inserted in its correct position

            // Shift earlier gap-sorted elements to make room for arr[i]
            for(j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            // Place temp at its correct location
            arr[j] = temp;
        }
    }

    // Display array after sorting
    printf("\nArray after sorting:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


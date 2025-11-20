// Aim: Write a program to conduct Binary search for a Key element over an array of n integer’s elements. Report Success or failure with appropriate message.
#include <stdio.h>

int main() {

    int arr[100], n, key, i;
    int index = -1;  // To store the found index

    // Take number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int left = 0, right = n - 1;  // Search range

    // Take array input (sorted)
    printf("Enter %d integers in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Binary search loop
    while (left <= right) {
        int mid = (left + right) / 2;  // Middle index

        if (arr[mid] == key) {        // Element found
            index = mid;
            break;
        }
        else if (arr[mid] < key) {    // Search in right half
            left = mid + 1;
        }
        else {                        // Search in left half
            right = mid - 1;
        }
    }

    // Final output
    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}

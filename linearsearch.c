// Aim : Write a program to conduct Linear search for a Key element over an array of n integer’s elements. Report Success or failure with appropriate message.



#include <stdio.h>

int main() {

    int arr[100], n, key, i;
    int found = 0;       // To check if the element is found or not
    int comparisons = 0; // To count how many comparisons happened

    // ---- Step 1: Take number of elements ----
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    // ---- Step 2: Input array elements ----
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ---- Display the array back to the user ----
    printf("\nYou entered the array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // ---- Step 3: Input the element to search ----
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // ---- Step 4: Linear Search ----
    printf("\nSearching for %d...\n", key);

    for (i = 0; i < n; i++) {
        comparisons++;           // Increase comparison count

        if (arr[i] == key) {     // If element is found
            printf("\n %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    // ---- Step 5: Result ----
    if (found == 0) {
        printf("\n %d is not present in the array.\n", key);
    }

    // ---- Step 6: Show search summary ----
    printf("\n Total comparisons made: %d\n", comparisons);
    printf(" Search completed successfully.\n");

    return 0;
}

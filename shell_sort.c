// Aim: To implement Shell Sort algorithm in C language 
// and sort an array of integers.
// Date: 2024-06-15
#include <stdio.h>

// ANSI color codes for attractive output
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define MAGENTA "\033[35m"

int main() {
    int arr[100], n, i, j, gap, temp;

    printf(MAGENTA "\n==============================\n" RESET);
    printf(CYAN "      SHELL SORT PROGRAM\n" RESET);
    printf(MAGENTA "==============================\n\n" RESET);

    // Input number of elements
    printf(YELLOW " Enter the number of elements: " RESET);
    scanf("%d", &n);

    // Input array elements
    printf(YELLOW " Enter %d elements:\n" RESET, n);
    for(i = 0; i < n; i++) {
        printf("  Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display array before sorting
    printf(CYAN "\n Array before sorting:\n" RESET);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Shell Sort algorithm
    for(gap = n/2; gap > 0; gap /= 2) {
        printf(GREEN "\n\n Using gap = %d\n" RESET, gap);

        for(i = gap; i < n; i++) {
            temp = arr[i];

            // Gapped insertion sort
            for(j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;

            // Show step-by-step progress
            printf("   Step after placing %d: ", temp);
            for(int k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }

    // Display array after sorting
    printf(CYAN "\n Array after sorting:\n" RESET);
    for(i = 0; i < n; i++) {
        printf(GREEN "%d " RESET, arr[i]);
    }

    printf(MAGENTA "\n\n======== SORTING COMPLETE ========\n" RESET);

    return 0;
}

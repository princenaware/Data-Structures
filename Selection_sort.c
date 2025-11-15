/*Aim: To implement Selection Sort algorithm in C.
----------------------------------------------------------------------------------------

*/

#include <stdio.h>
int main() {
    int arr[100], n, i, j, min, swap;
    printf("Enter the number of Elements : ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting:\n ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for(i = 0; i < n-1; i++) {
        min = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        swap = arr[min];
        arr[min] = arr[i];
        arr[i] = swap;
    } 
    printf("\nArray after sorting:\n ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSUCCESSFULLY SORTED USING SELECTION SORT\n");
    return 0;
}


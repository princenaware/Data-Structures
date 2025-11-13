// Aim : Write a program to conduct Linear search for a Key element over an array of n integer’s elements. Report Success or failure with appropriate message.

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


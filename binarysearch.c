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
 
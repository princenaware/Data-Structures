#include<stdio.h>
int main() {
    int arr[100], n, i, j, gap, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     printf("Array before sorting :\n ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    for(gap = n/2; gap > 0; gap /= 2) {
        for(i = gap; i < n; i++) {
            temp = arr[i];
            for(j = i; j >= gap && arr[j-gap] > temp; j -= gap) {
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
        }
    }
    printf("\n Array after sorting :\n ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

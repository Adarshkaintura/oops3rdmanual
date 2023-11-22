#include <stdio.h>

int isElementInArray(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n1, n2;
    
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    printf("Enter %d elements for the first array: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    printf("Enter %d elements for the second array: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection of the two arrays: ");

    for (int i = 0; i < n1; i++) {
        if (isElementInArray(arr2, n2, arr1[i])) {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}

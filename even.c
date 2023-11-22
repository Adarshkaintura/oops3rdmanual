#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("The sum of even elements in the array is: %d\n", sum);

    return 0;
}

#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int end = N - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

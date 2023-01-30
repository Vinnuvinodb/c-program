#include <stdio.h>

#define N 7

void reverse_array(int arr[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int arr[N] = {16, 18, 27, 16, 23, 21, 19};
    reverse_array(arr, N);
    printf("Reverse Array elements: { ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");
    return 0;
}

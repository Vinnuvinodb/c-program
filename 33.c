#include <stdio.h>      

void reverseArray(int arr[], int size) {
    int i, temp;
    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    reverseArray(arr, size);
    printf("\nReversed array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}

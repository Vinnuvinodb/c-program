#include <stdio.h>

int getLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int largest = getLargest(arr, n);
    printf("The largest element in the array is: %d", largest);

return 0;
}

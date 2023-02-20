#include <stdio.h>

int main() {
    int arr[50], n, largest1, largest2;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // read in the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // initialize largest1 and largest2 to the first two elements
    if (arr[0] > arr[1]) {
        largest1 = arr[0];
        largest2 = arr[1];
    } else {
        largest1 = arr[1];
        largest2 = arr[0];
    }

    // iterate through the rest of the array and update largest1 and largest2
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        } else if (arr[i] > largest2) {
            largest2 = arr[i];
        }
    }

    printf("The largest two elements in the array are %d and %d\n", largest1, largest2);
    return 0;
}

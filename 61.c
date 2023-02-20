#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if x is present at mid
        if (arr[mid] == x) {
            return mid;
        }

        // If x is greater, ignore left half
        if (arr[mid] < x) {
            left = mid + 1;
        }
        // If x is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // Element is not present in array
    return -1;
}

int main() {
    int n, x;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Get the array elements from user
    printf("Enter the array elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    // Call binarySearch function to search the element
    int result = binarySearch(arr, 0, n - 1, x);

    // Display the position of the element
    if (result == -1) {
        printf("Element not found in array.\n");
    } else {
        printf("Element found at position %d.\n", result + 1);
    }

    return 0;
}

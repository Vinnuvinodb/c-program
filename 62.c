#include <stdio.h>

// Function to find Mth maximum number
int findMthMax(int arr[], int n, int m) {
    int i, j, max;

    // Traverse the array m times
    for (i = 0; i < m; i++) {
        // Find the maximum element in the remaining array
        max = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }
        // Swap the maximum element with the ith element
        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
    return arr[m - 1];
}

// Function to find Nth minimum number
int findNthMin(int arr[], int n, int N) {
    int i, j, min;

    // Traverse the array N times
    for (i = 0; i < N; i++) {
        // Find the minimum element in the remaining array
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap the minimum element with the ith element
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    return arr[N - 1];
}

int main() {
    int n, m, i, sum, diff;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of M: ");
    scanf("%d", &m);
    printf("Enter the value of N: ");
    scanf("%d", &i);
    int mthMax = findMthMax(arr, n, m);
    int nthMin = findNthMin(arr, n, i);
    sum = mthMax + nthMin;
    diff = mthMax - nthMin;
    printf("The %dth maximum element in the array is: %d\n", m, mthMax);
    printf("The %dth minimum element in the array is: %d\n", i, nthMin);
    printf("The sum of the %dth maximum and %dth minimum elements is: %d\n", m, i, sum);
    printf("The difference of the %dth maximum and %dth minimum elements is: %d\n", m, i, diff);
    return 0;
}

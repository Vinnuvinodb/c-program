#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

int quickselect(int arr[], int low, int high, int k) {
    if (low == high) {
        return arr[low];
    }

    int pivot_index = partition(arr, low, high);
    int pivot_rank = pivot_index - low + 1;

    if (k == pivot_rank) {
        return arr[pivot_index];
    } else if (k < pivot_rank) {
        return quickselect(arr, low, pivot_index - 1, k);
    } else {
        return quickselect(arr, pivot_index + 1, high, k - pivot_rank);
    }
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int kth_smallest = quickselect(arr, 0, n - 1, k);
    printf("The %dth smallest element is %d\n", k, kth_smallest);

    return 0;
}

#include <stdio.h>

void bubbleSort(int array[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {
    int array[100], i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    bubbleSort(array, size);
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

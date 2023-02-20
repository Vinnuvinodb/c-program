#include <stdio.h>

int main() {
    int array[100], size, index, value;

    // read input array size from user
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // read array elements from user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // read index and value from user
    printf("Enter index where you want to insert element: ");
    scanf("%d", &index);
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);

    // shift array elements to the right from the index
    for (int i = size; i > index; i--) {
        array[i] = array[i - 1];
    }

    // insert the value at the index
    array[index] = value;

    // increase array size by 1
    size++;

    // print the updated array
    printf("Array after inserting %d at index %d:\n", value, index);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
0 comments on commit d2

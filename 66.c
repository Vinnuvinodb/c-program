#include <stdio.h>

int main() {
    int array1[100], array2[100], concatenated[200];
    int size1, size2, i, j, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array: ");
    for (j = 0; j < size2; j++) {
        scanf("%d", &array2[j]);
    }

    // concatenate the two arrays into the third array
    k = 0;
    for (i = 0; i < size1; i++) {
        concatenated[k] = array1[i];
        k++;
    }
    for (j = 0; j < size2; j++) {
        concatenated[k] = array2[j];
        k++;
    }

    // print the concatenated array
    printf("The concatenated array is: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", concatenated[i]);
    }

    return 0;
}

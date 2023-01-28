#include<stdio.h>

int main() {
    int i, j, matrix[3][3], diagonal_sum = 0;

    printf("Enter elements of the matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Elements are: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
                diagonal_sum += matrix[i][j];
            }
        }
    }

    printf("\nSum of diagonal elements = %d\n", diagonal_sum);

    return 0;
}

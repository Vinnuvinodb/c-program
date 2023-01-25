#include <stdio.h>

int main() {
    int mat1[2][2] = {{1, 2}, {5, 3}};
    int mat2[2][2] = {{2, 3}, {4, 11}};
    int matMul[2][2];
    int i, j, k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matMul[i][j] = 0;
            for (k = 0; k < 2; k++) {
                matMul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Matrix Multiplication:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matMul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

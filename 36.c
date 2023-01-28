#include <stdio.h>

#define ROW1 3
#define COL1 2
#define ROW2 2
#define COL2 3

void matrixMultiplication(int mat1[][COL1], int mat2[][COL2], int result[][COL2]) {
    int i, j, k;
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (k = 0; k < ROW2; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[ROW1][COL1] = {{1, 2}, {3, 4}, {5, 6}};
    int mat2[ROW2][COL2] = {{7, 8, 9}, {10, 11, 12}};
    int result[ROW1][COL2];

    matrixMultiplication(mat1, mat2, result);

    int i, j;
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

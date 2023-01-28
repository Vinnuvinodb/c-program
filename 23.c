#include <stdio.h>

int main() {
    int mat[3][3], i, j;
    int sum = 0;
    float avg;

    printf("Enter elements of 3x3 matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    avg = (float)sum / (3 * 3);

    printf("Sum of matrix elements: %d\n", sum);
    printf("Average of matrix elements: %f\n", avg);

return 0;
}

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
  int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS];
  int rows1, cols1, rows2, cols2, i, j, k;
  int result[MAX_ROWS][MAX_COLS] = {0};

  printf("Enter number of rows and columns for first matrix: ");
  scanf("%d%d", &rows1, &cols1);
  printf("Enter elements of first matrix: \n");
  for (i = 0; i < rows1; i++) {
    for (j = 0; j < cols1; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter number of rows and columns for second matrix: ");
  scanf("%d%d", &rows2, &cols2);
  printf("Enter elements of second matrix: \n");
  for (i = 0; i < rows2; i++) {
    for (j = 0; j < cols2; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }

  if (cols1 != rows2) {
    printf("Matrices can't be multiplied!\n");
    return 0;
  }

  for (i = 0; i < rows1; i++) {
    for (j = 0; j < cols2; j++) {
      for (k = 0; k < cols1; k++) {
        result[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }

  printf("Product of matrices:\n");
  for (i = 0; i < rows1; i++) {
    for (j = 0; j < cols2; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}

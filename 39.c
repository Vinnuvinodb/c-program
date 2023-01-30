#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x, y, z;

  printf("Input the value of 1st element : ");
  scanf("%d", &x);
  printf("Input the value of 2nd element : ");
  scanf("%d", &y);
  printf("Input the value of 3rd element : ");
  scanf("%d", &z);

  printf("The value before swapping are :\n");
  printf("element 1 = %d\n", x);
  printf("element 2 = %d\n", y);
  printf("element 3 = %d\n", z);

  swap(&x, &y);
  swap(&y, &z);
  swap(&z, &x);

  printf("The value after swapping are :\n");
  printf("element 1 = %d\n", x);
  printf("element 2 = %d\n", y);
  printf("element 3 = %d\n", z);

  return 0;
}

#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b, c;
    printf("Input the value of 1st element : ");
    scanf("%d", &a);
    printf("Input the value of 2nd element : ");
    scanf("%d", &b);
    printf("Input the value of 3rd element : ");
    scanf("%d", &c);

    printf("Before swapping:\na = %d, b = %d, c = %d\n", a, b, c);
    swap(&a, &b);
    swap(&b, &c);
    printf("After swapping:\na = %d, b = %d, c = %d\n", a, b, c);

return 0;
}

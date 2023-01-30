#include <stdio.h>

void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int a, b, result;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    add(&a, &b, &result);
    printf("The sum of the two numbers is: %d", result);

    return 0;
}

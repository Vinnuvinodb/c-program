#include <stdio.h>

void factorial(int *n, int *result) {
    int i;
    *result = 1;
    for (i = 1; i <= *n; i++) {
        *result *= i;
    }
}

int main() {
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial(&num, &fact);
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}

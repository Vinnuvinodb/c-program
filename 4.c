#include <stdio.h>

int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d is divisible by %d\n", num, i);
            sum += i;
        }
    }
    printf("The sum of all divisors of %d is %d\n", num, sum);
    return 0;
}

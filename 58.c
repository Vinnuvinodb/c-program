#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a value of n: ");
    scanf("%d", &n);

    int count = 0, i = 2, nth_prime;
    while (count < n) {
        if (is_prime(i)) {
            printf("%d ", i);
            count++;
            nth_prime = i;
        }
        i++;
    }
    printf("\nThe nth prime number is: %d\n", nth_prime);

    return 0;
}

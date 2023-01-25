#include <stdio.h>

int main() {
    int m, n, i, odd_count = 0, even_count = 0;
    printf("Enter the range (M and N): ");
    scanf("%d %d", &m, &n);

    for (i = m; i <= n; i++) {
        if (i % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
            printf("%d ", i);
        }
    }

    printf("\nNumber of odd numbers: %d\n", odd_count);
    printf("Number of even numbers: %d\n", even_count);

    return 0;
}

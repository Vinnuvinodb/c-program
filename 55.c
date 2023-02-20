#include <stdio.h>

int main() {
    int A;
    printf("Enter the limit A: ");
    scanf("%d", &A);
    printf("Pythagorean triples with value smaller than %d:\n", A);
    for (int m = 2; m < A; m++) {
        for (int n = 1; n < m; n++) {
            int a = m*m - n*n;
            int b = 2*m*n;
            int c = m*m + n*n;
            if (c >= A) {
                break;
            }
            printf("(%d,%d,%d)\n", a, b, c);
        }
    }
    return 0;
}

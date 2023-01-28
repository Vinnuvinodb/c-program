#include <stdio.h>

void printTable(int m, int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", m, i, m*i);
    }
}

int main() {
    int m, n;
    printf("Enter the number for the table: ");
    scanf("%d", &m);
    printf("Enter the limit for the table: ");
    scanf("%d", &n);
    printTable(m, n);
    return 0;
}

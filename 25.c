#include <stdio.h>

int main() {
    int n, i, j;
    printf("Number of Rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
return 0;
}

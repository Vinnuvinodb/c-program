#include <stdio.h>

int main() {
    int num_lines, i, j;
    printf("Enter the number of lines: ");
    scanf("%d", &num_lines);
    for (i = 1; i <= num_lines; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int num, temp, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        reversed = (reversed * 10) + (temp % 10);
        temp /= 10;
    }

    printf("Reversed number: %d", reversed);

    return 0;
}

#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse number: %d", reverse(num));
    return 0;
}

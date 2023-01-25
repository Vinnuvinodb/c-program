#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are eligible to vote.");
    } else {
        printf("You are allowed to vote after %d years.", 18 - age);
    }
    return 0;
}

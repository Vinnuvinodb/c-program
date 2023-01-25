#include <stdio.h>

float calculate_interest(float principal, int years, int senior_citizen) {
    float rate = senior_citizen ? 0.12 : 0.10;
    return principal * rate * years;
}

int main() {
    float principal;
    int years;
    char senior_citizen;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("Is customer a senior citizen (y/n): ");
    scanf(" %c", &senior_citizen);

    float interest = calculate_interest(principal, years, senior_citizen == 'y');
    printf("Interest: %.2f", interest);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char statement[100];
    int i, vowels = 0;
    printf("Enter a statement: ");
    scanf("%[^\n]s", statement);

    for (i = 0; i < strlen(statement); i++) {
        if (statement[i] == 'a' || statement[i] == 'e' || statement[i] == 'i' || statement[i] == 'o' || statement[i] == 'u' || statement[i] == 'A' || statement[i] == 'E' || statement[i] == 'I' || statement[i] == 'O' || statement[i] == 'U') {
            vowels++;
        }
    }
    printf("Number of vowels = %d", vowels);
    return 0;
}

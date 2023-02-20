#include <stdio.h>
#include <ctype.h>

void count_vowels_and_consonants(char *str, int *num_vowels, int *num_consonants);

int main() {
    char str[100];
    int num_vowels = 0, num_consonants = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    count_vowels_and_consonants(str, &num_vowels, &num_consonants);

    printf("Number of vowels: %d\n", num_vowels);
    printf("Number of consonants: %d\n", num_consonants);

    return 0;
}

void count_vowels_and_consonants(char *str, int *num_vowels, int *num_consonants) {
    char *ptr = str;

    while (*ptr != '\0') {
        if (isalpha(*ptr)) {
            switch (tolower(*ptr)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    (*num_vowels)++;
                    break;
                default:
                    (*num_consonants)++;
                    break;
            }
        }
        ptr++;
    } 
}

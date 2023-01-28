#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length = 0;
    char *ptr;

    printf("Input a string : ");
    gets(str);

    ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("The length of the given string '%s' is : %d\n", str, length);

    return 0;
}

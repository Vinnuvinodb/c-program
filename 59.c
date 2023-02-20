#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

// Function to compare two strings based on alphabetical order
int compare_strings(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH]; // array to store names
    int num_names; // number of names to be sorted
    int i, j, choice;

    // Get input from user
    printf("Enter the number of names to be sorted: ");
    scanf("%d", &num_names);

    printf("Enter the names:\n");
    for (i = 0; i < num_names; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);

    // Sort the names using the qsort function
    if (choice == 1) {
        qsort(names, num_names, sizeof(names[0]), compare_strings);
    } else if (choice == 2) {
        qsort(names, num_names, sizeof(names[0]), compare_strings);
        // Reverse the order of the sorted array to get descending order
        for (i = 0, j = num_names - 1; i < j; i++, j--) {
            char temp[MAX_NAME_LENGTH];
            strcpy(temp, names[i]);
            strcpy(names[i], names[j]);
            strcpy(names[j], temp);
        }
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    // Print the sorted names
    printf("Sorted names:\n");
    for (i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

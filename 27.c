#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        int flag = 0;
        if (arr[i] == 1 || arr[i] == 0) {
            continue;
        }
        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            count++;
        }
    }
    printf("Number of composite numbers in the array: %d", count);
    return 0;
}

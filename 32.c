#include <stdio.h>

int main() {
    int n, *p, i, sum = 0;
    printf("Input the number of elements to store in the array (max 10) : ");
    scanf("%d", &n);

    p = (int*) malloc(n * sizeof(int));

    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i+1);
        scanf("%d", p+i);
    }

    for (i = 0; i < n; i++) {
        sum += *(p+i);
    }

    printf("The sum of array is : %d", sum);
    free(p);
    return 0;
}

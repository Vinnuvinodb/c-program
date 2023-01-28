#include <stdio.h>

#define N 5

int main() {
    int array[N] = {1, 2, 3, 4, 5};
    int sum = 0, i;
    float average;

    for (i = 0; i < N; i++) {
        sum += array[i];
    }
    average = (float)sum / N;

    printf("Sum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", average);

    return 0;
}

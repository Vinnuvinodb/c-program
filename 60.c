#include <stdio.h>

int main() {
  int n, i, j, temp, count = 1, maxCount = 1, mode;
  float sum = 0, mean, median;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  // Calculate mean
  mean = sum / n;
  printf("Mean: %.2f\n", mean);

  // Sort the array
  for (i = 0; i < n-1; i++) {
    for (j = i+1; j < n; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  // Calculate median
  if (n % 2 == 0) {
    median = (float)(arr[(n-1)/2] + arr[n/2]) / 2;
  } else {
    median = arr[n/2];
  }
  printf("Median: %.2f\n", median);

  // Calculate mode
  for (i = 0; i < n-1; i++) {
    if (arr[i] == arr[i+1]) {
      count++;
      if (count > maxCount) {
        maxCount = count;
        mode = arr[i];
      }
    } else {
      count = 1;
    }
  }
  if (maxCount == 1) {
    printf("Mode: None\n");
  } else {
    printf("Mode: %d\n", mode);
  }

  return 0;
}

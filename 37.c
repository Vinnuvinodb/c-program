#include <stdio.h>

int main() {
  int arr[] = {16, 18, 27, 16, 23, 21, 19};
  int n = sizeof(arr)/sizeof(arr[0]);
  int sum = 0;
  
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  
  float avg = (float)sum/n;
  
  printf("Sum of elements: %d\n", sum);
  printf("Average of elements: %.2f\n", avg);
  
  return 0;
}

#include <stdio.h>

int minimum(int arr[], int n, int i) {
  static int min = 0;
  if (i < n) {
    if (arr[i] < arr[min]) {
      min = i;
    }
    minimum(arr, n, i + 1);
  }
  return min;
}

int maximum(int arr[], int n, int i) {
  static int max = 0;
  if (i < n) {
    if (arr[i] > arr[max]) {
      max = i;
    }
    maximum(arr, n, i + 1);
  }
  return max;
}

int main(void) {
  int n;
  printf("Enter size of the array: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Minimum of array is: %d\n", arr[minimum(arr, n, 1)]);
  printf("Maximum of array is: %d\n", arr[maximum(arr, n, 1)]);
  return 0;
}
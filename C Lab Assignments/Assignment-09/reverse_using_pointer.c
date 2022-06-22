// reverse an array using pointer
#include <stdio.h>

int main(void) {
  int n;
  printf("Enter size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int *startptr = arr;
  int *endptr = &arr[n - 1];
  while (startptr < endptr) {
    int temp = *startptr;
    *startptr = *endptr;
    *endptr = temp;
    startptr++;
    endptr--;
  }

  printf("Reversed array is:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
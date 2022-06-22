// copy one array to another using pointers
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

  int copyarr[n];
  int *startarr = arr;
  int *startcopyarr = copyarr;
  int *endarr = &arr[n - 1];
  while (startarr <= endarr) {
    *startcopyarr = *startarr;
    startarr++;
    startcopyarr++;
  }

  printf("Elements of copyarr:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", copyarr[i]);
  }

  return 0;
}
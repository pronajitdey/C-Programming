#include <stdio.h>

int sum(int n);

int main(void) {
  int n, res;
  printf("Enter the number of integers: ");
  scanf("%d", &n);
  if (n < 0) {
    printf("Usage: Enter a positive number\n");
    return 1;
  }

  res = sum(n);
  printf("The sum of %d integers = %d\n", n, res);

  return 0;
}

int sum(int n) {
  if (n > 0) {
    return (n + sum(n - 1));
  } else {
    return 0;
  }
}
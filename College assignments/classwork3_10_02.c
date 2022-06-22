// Check if prime number
#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n == 1) {
    printf("1 is not a prime number\n");
    return 0;
  }

  int i = 2;
  while (i < n / 2) {
    if (n % i == 0) {
      printf("%d is not a prime number\n", n);
      return 0;
    }
    i++;
  }
  printf("%d is a prime number\n", n);

  return 0;
}
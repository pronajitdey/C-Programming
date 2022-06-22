#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number :: ");
  scanf("%d", &n);

  int sum = 0;
  while (n > 0) {
    int last_digit = n % 10;
    sum += last_digit;
    n /= 10;
  }

  printf("%d\n", sum);
  
  return 0;
}
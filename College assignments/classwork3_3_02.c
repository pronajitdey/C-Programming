// Recursive approach of Fibonacci series

#include <stdio.h>

int T(int n);

int main(void) {
  int n;
  printf("Enter the term which you want to know :: ");
  scanf("%d", &n);

  printf("T(%d) = %d\n", n, T(n));

  return 0;
}

int T(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else if (n < 0) {
    return -1;
  } else {
    return T(n - 1) + T(n - 2);
  }
}
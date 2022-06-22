// Iterative approach of Fibonacci series

#include <stdio.h>

void fib(int n);

int main(void) {
  int n;
  printf("Enter the term which you want to know :: ");
  scanf("%d", &n);

  fib(n);

  return 0;
}

void fib(int n) {
  if (n < 0) {
    printf("T(%d) = -1", n);
  } else {
    
    int first = 0, second = 1, next;
    for (int i = 0; i < n; i++) {
      next = first + second;
      first = second;
      second = next;
    }
    printf("T(%d) = %d\n", n, first);
  }
}
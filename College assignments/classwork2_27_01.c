/* f(x) = x + 2 and g(x) = x^2 + 2 * x
Write a main function to scanf an integer p and print f(g(p))
as well as g(f(p)) */

#include <stdio.h>

int f(int x);
int g(int x);

int main(void) {
  int p;
  printf("Enter an integer: ");
  scanf("%d", &p);

  printf("f(g(p)) = %d\n", f(g(p)));
  printf("g(f(p)) = %d\n", g(f(p)));

  return 0;
}

int f(int x) {
  return (x + 2);
}

int g(int x) {
  return ((x * x) + 2 * x);
}
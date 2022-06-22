#include <stdio.h>

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main(void) {
  int a, b;
  printf("Enter the values of a and b: ");
  scanf("%d%d", &a, &b);
  int large = a, small = b;
  if (b > a) {
    large = b;
    small = a;
  }
  printf("GCD of %d and %d = %d\n", a, b, gcd(large, small));
  return 0;
}
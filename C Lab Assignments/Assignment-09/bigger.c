// find bigger of two given numbers using pointer
#include <stdio.h>

int main(void) {
  int a, b;
  int *p = &a, *q = &b;
  printf("Enter first number: ");
  scanf("%d", p);
  printf("Enter second number: ");
  scanf("%d", q);

  int bigger = *p > *q ? *p : *q;
  printf("%d is bigger\n", bigger);
  return 0;
}
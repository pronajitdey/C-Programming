// Print all numbers divisible by both 3 and 7 in a given range
#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter range: ");
  scanf("%d %d", &a, &b);

  int i = a;
  while (i <= b) {
    if (i % 3 == 0 && i % 7 == 0) {
      printf("%d\t", i);
    }
    i++;
  }
  printf("\n");

  return 0;
}
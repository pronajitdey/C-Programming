// Print the sum of odd number upto a given range
#include <stdio.h>

int main(void) {
  int l, u;
  printf("Enter the range :: ");
  scanf("%d %d", &l, &u);

  int sum = 0;
  for (int i = l; i <= u; i++) {
    if (i % 2 != 0) {
      sum += i;
    }
  }

  printf("Sum = %d\n", sum);

  return 0;
}
#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("-1\n");
    return 1;
  }

  int fact = 1;

  if (n == 0 || n == 1) {
    printf("1\n");

  } else {
    for (int i = n; i > 0; i--) {
      fact *= i;
    }
    printf("%d\n", fact);
  }

  return 0;
}
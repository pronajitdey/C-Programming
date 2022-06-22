// Print the prime numbers within range
#include <stdio.h>

int main(void) {
  int l_lim, u_lim;
  printf("Enter the range :: ");
  scanf("%d %d", &l_lim, &u_lim);

  for (int i = l_lim; i <= u_lim; i++) {
    int prime = 1;

    if (i <= 0 || i == 1) {
      continue;
    }

    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        prime = 0;
        break;
      }
    }

    if (prime == 1) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
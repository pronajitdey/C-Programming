#include <stdio.h>

int DivBy2(int x);

int main(void) {
  while (1) {
    int n;
    printf("\nEnter an integer: ");
    scanf("%d", &n);

    if (n == 0) {
      break;
    }

    int return_value = DivBy2(n);
    printf("The return value is %d\n", return_value);
    printf("\n================================\n");
  }

  return 0;
}

int DivBy2(int x) {

  // Return 1 if the number is divisible by or 2 otherwise return 0
  if (x % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}
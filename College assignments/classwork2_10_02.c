// Print the leap years in a given range of years
#include <stdio.h>

int main(void) {
  int ly, uy;
  printf("Enter lower and upper range of years respectively: ");
  scanf("%d %d", &ly, &uy);
  printf("The leap years are:-\n");

  int year = ly;
  while (year <= uy) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d\t", year);

    }

    year++;
  }

  return 0;
}
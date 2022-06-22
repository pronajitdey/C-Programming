// find sum of 3 no.s inputted by command line arguments
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Missing command-line arguments\n");
    return 1;
  }

  int sum = atoi(argv[1]) + atoi(argv[2]);
  printf("sum = %d\n", sum);
  return 0;
}
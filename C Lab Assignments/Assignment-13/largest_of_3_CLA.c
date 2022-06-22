// find largest of 3 no.s inputted by CLA
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 4) {
    printf("Missing command-line arguments\n");
    return 1;
  }

  int largest = atoi(argv[1]);
  if (atoi(argv[2]) > largest) {
    largest = atoi(argv[2]);
  }
  if (atoi(argv[3]) > largest) {
    largest = atoi(argv[3]);
  }

  printf("Largest is %d\n", largest);
  return 0;
}
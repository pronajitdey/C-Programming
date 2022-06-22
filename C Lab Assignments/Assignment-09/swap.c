// swap 2 no.s using call by reference
#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
  int a, b;
  printf("Enter a and b respectively: ");
  scanf("%d%d", &a, &b);

  printf("Before swapping:- ");
  printf("a = %d, b = %d\n", a, b);

  swap(&a, &b);

  printf("After swapping:- ");
  printf("a = %d, b = %d\n", a, b);

  return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
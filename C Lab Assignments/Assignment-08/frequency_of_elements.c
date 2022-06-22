// find the frequency of array elements in a 1-D array
#include <stdio.h>

void count(int *a, int *b, int n) {
  for (int i = 0; i < n; i++) {
    int c = 0;
    if (a[i] != -1) {
      c++;
      for (int j = i + 1; j < n; j++) {
        if (a[i] == a[j]) {
          c++;
          a[j] = -1;
        }
      }
    }
    b[i] = c;
  }

  for (int i = 0; i < n; i++) {
    if (a[i] != -1) {
      printf("Frequency of %d is %d\n", a[i], b[i]);
    }
  }
}

int main() {
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  count(a, b, n);
  return 0;
}
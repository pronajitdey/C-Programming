#include <stdio.h>

int main(void) {
  int rows, cols;
  printf("Enter the number of rows and columns respectively: ");
  scanf("%d%d", &rows, &cols);
  
  int arr1[rows][cols];
  int arr2[rows][cols];

  printf("Enter the elements of 1st array:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("Enter the elements of 2nd array:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &arr2[i][j]);
    }
  }

  int sum[rows][cols];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      *(*(sum + i) + j) = (*(*(arr1 + i) + j)) + (*(*(arr2 + i) + j));
    }
  }

  printf("Sum of the 2 matrices is:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}
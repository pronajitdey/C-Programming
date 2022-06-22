#include <stdio.h>

int main(void)
{
	int rA, rB, cA, cB;

	// Propmt user to input number of rows and columns
	printf("Enter the number of rows and columns of matrix A respectively: ");
	scanf("%d %d", &rA, &cA);
	printf("Enter the number of rows and columns of matrix B respectively: ");
	scanf("%d %d", &rB, &cB);

	// Check if matrix multiplication is possible or not
	if (cA != rB)
	{
		printf("Matrix multiplication is not possible\n");
		return 1;
	}

	// Declare two matrices
	int matA[rA][cA], matB[rB][cB];

	// Ask user to input elements of the matrix
	printf("\nEnter the elements of matrix A\n");
	for (int i = 0; i < rA; i++)
	{
		for (int j = 0; j < cA; j++)
		{
			printf("Enter the element a%d%d : ", i + 1, j + 1);
			scanf("%d", &matA[i][j]);
		}
	}

	// Ask user to input elements of the matrix
	printf("\nEnter the elements of matrix B\n");
	for (int i = 0; i < rB; i++)
	{
		for (int j = 0; j < cB; j++)
		{
			printf("Enter the element b%d%d : ", i + 1, j + 1);
			scanf("%d", &matB[i][j]);
		}
	}

	printf("\nMatrix A is :-\n");
	for (int i = 0; i < rA; i++)
	{
		for (int j = 0; j < cA; j++)
		{
			printf("%d\t", matA[i][j]);
		}
		printf("\n");
	}

	printf("\nMatrix B is :-\n");
	for (int i = 0; i < rB; i++)
	{
		for (int j = 0; j < cB; j++)
		{
			printf("%d\t", matB[i][j]);
		}
		printf("\n");
	}

	// Declare a third matrix matC = matA X matB
	int matC[rA][cB];

	// Perform matrix multiplication
	for (int i = 0; i < rA; i++)
	{
		for (int j = 0; j < rB; j++)
		{
			int temp = 0;
			for (int k = 0; k < cA; k++)
			{
				temp += matA[i][k] * matB[k][j];
			}

			matC[i][j] = temp;
		}
	}

	printf("\nMatix C is :-\n");
	for (int i = 0; i < rA; i++)
	{
		for (int j = 0; j < cB; j++)
		{
			printf("%d\t", matC[i][j]);
		}
		printf("\n");
	}

	return 0;
}

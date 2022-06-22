#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	char cell[25][25];

	for (int i = 0; i < t; i++)
	{
		int rows, cols;
		scanf("%d %d", &rows, &cols);

		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < cols; k++)
			{
				scanf(" %c", &cell[j][k]);
			}
		}

		int borders = 0;
		for (int j = 0; j < rows; j++)
		{
			int hash_count = 0;
			for (int k = 0; k < cols; k++)
			{
				if (cell[j][k] == '#')
				{
					hash_count++;
				}
			}

			if (hash_count > borders)
			{
				borders = hash_count;
			}
		}

		printf("%d\n", borders);
	}

	return 0;
}
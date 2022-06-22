#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	printf("Enter the number of students: ");
	scanf("%d", &n);

	char names[n][20], temp[20];

	for (int i = 0; i < n; i++)
	{
		printf("Enter the name of student %d: ", i + 1);
		scanf("%s", names[i]);
	}

	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n - 1; k++)
		{
			if (strcmp(names[k], names[k + 1]) > 0)
			{
				strcpy(temp, names[k]);
				strcpy(names[k], names[k + 1]);
				strcpy(names[k + 1], temp);
			}
		}
	}

	printf("Names of the students: ");

	for (int i = 0; i < n; i++)
	{
		printf("%s ", names[i]);
	}
	printf("\n");

	return 0;
}
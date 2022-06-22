#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the number of students: ");
	scanf("%d", &n);

	char names[n][20];
	for (int i = 0; i < n; i++)
	{
		printf("Enter the name of student %d: ", i + 1);
		scanf("%s", names[i]);
	}

	printf("Names of the students are: ");

	for (int i = 0; i < n; i++)
	{
		printf("%s ", names[i]);
	}
	printf("\n");

	return 0;
}
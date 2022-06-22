#include <stdio.h>

int main(void)
{
	int i, n;
	int arr[20];

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter the elements: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}

	printf("The elements entered are: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
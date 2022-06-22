#include <stdio.h>

int main(void)
{
	int i, n, sum = 0;
	int arr[20];
	int *psum = &sum;
	float mean, *pmean = &mean;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Enter the element: ");
		scanf("%d", arr + i);
	}

	printf("The elements entered are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (i = 0; i < n; i++)
	{
		*psum += *(arr + i);
	}

	*pmean = (float) *psum / n;

	printf("The sum is: %d\n", *psum);
	printf("The mean is: %.2f\n", *pmean);

	return 0;
}
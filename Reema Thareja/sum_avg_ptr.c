#include <stdio.h>

int main(void)
{
	int m, n, sum = 0;
	int *pm = &m, *pn = &n, *psum = &sum;
	float avg, range, *pavg = &avg;

	printf("Enter the starting and ending limit of the numbers to be summed: ");
	scanf("%d %d", pm, pn);

	range = *pn - *pm;

	while (*pm <= *pn)
	{
		*psum += *pm;
		*pm += 1;
	}

	printf("Sum of numbers = %d\n", *psum);

	*pavg = *psum / range;

	printf("Average of numbers = %.2f\n", *pavg);

	return 0;
}
#include <stdio.h>

int greater(int a, int b);

int main(void)
{
	int a, b;
	printf("Enter the 1st number: ");
	scanf("%d", &a);

	printf("Enter the 2st number: ");
	scanf("%d", &b);

	printf("%d", greater(a, b));

	return 0;
}

int greater(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a number\n");
	scanf("%d", &n);

	if (n == 2)
		printf("The number is 2\n");
	else
		printf("The number is not 2");

	return 0;
}
#include <stdio.h>

int main(void)
{
	int n = 1;
	while (1)
	{
		if (n % 11 == 0 && n % 77 == 0)
			printf("%d\t", n);

		if (n > 10001)
			break;

		n++;
	}

	return 0;

}
#include <stdio.h>

int main(void)
{
	int i, j, p;
	char str[] = "HELLO";

	for (i = 0; i < 5; i++)
	{
		p = i + 1;
		printf("%-5.*s\n", p, str);
	}

	for (j = 5; j > 0; j--)
	{
		p = j;
		printf("%-5.*s\n", p, str);
	}

	return 0;
}
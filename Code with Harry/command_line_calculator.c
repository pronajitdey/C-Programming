#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	// Check for required number of command line arguments
	if (argc != 4)
	{
		printf("Usage: command_line_calculator.exe operation int int\n");
		return 1;
	}

	int a = atoi(argv[2]), b = atoi(argv[3]);

	if (strcmp(argv[1], "add") == 0)
	{
		printf("%d + %d = %d\n", a, b, a + b);
	}
	else if (strcmp(argv[1], "subtract") == 0)
	{
		printf("%d - %d = %d\n", a, b, a - b);
	}
	else if (strcmp(argv[1], "multiply") == 0)
	{
		printf("%d X %d = %d\n", a, b, a * b);
	}
	else if (strcmp(argv[1], "divide") == 0)
	{
		printf("%d / %d = %.3f\n", a, b, (float) a / b);
	}

	return 0;
}
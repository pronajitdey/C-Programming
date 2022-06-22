#include <stdio.h>

int main(void)
{
	char str[1000];
	int i = 0, line_count = 1;
	printf("Enter a * to end\n");
	printf("*****************\n");
	printf("Enter the text:\n");
	scanf("%c", &str[i]);

	while (str[i] != '*')
	{
		i++;
		scanf("%c", &str[i]);
	}
	str[i] = '\0';

	i = 0;
	while (str[i] != '\0')
	{
		if (line_count == 1 && i == 0)
		{
			printf("\n %d\t", line_count);
		}

		if (str[i - 1] == '\n')
		{
			line_count++;
			printf(" %d\t", line_count);
		}

		printf("%c", str[i]);
		i++;
	}

	return 0;
}
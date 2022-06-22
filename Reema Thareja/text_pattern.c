#include <stdio.h>

int main(void)
{
	char str[200], pat[200];
	int i = 0, j, k, found = 0;
	int count = 0;
	printf("Enter the string: ");
	gets(str);
	printf("Enter the pattern: ");
	gets(pat);

	while (str[i] != '\0')
	{
		j = 0, k = i;
		while (str[k] == pat[j] && pat[j] != '\0')
		{
			j++;
			k++;
		}
		if (pat[j] == '\0')
		{
			found = 1;
			count++;
		}
		i++;
	}

	if (found == 1)
	{
		printf("PATTERN FOUND %d TIMES\n", count);
	}
	else
	{
		printf("PATTERN NOT FOUND\n");
	}

	return 0;
}
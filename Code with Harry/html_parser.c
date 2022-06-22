#include <stdio.h>
#include <string.h>

void parser(char string[]);

int main(void)
{
	char string[] = "<h1>This is the heading</h1>";
	parser(string);
	return 0;
}

void parser(char str[])
{
	int i = 0;

	if (str[i] == '<')
	{
		while (str[i] != '>')
		{
			i++;
		}
	}
	i++;

	while (str[i] != '<')
	{
		printf("%c", str[i]);
		i++;
	}

	printf("\n");
}
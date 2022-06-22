#include <stdio.h>

int main(void)
{
	int i = 0, char_count = 0, word_count = 0, line_count = 0;
	char str[100];
	printf("Enter a * to end\n");
	printf("Enter the text: ");
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
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			word_count++;
		}
		if (str[i] == '\n')
		{
			line_count++;
		}
		
		char_count++;
		i++;
	}

	printf("The total count of words is: %d\n", word_count + 1);
	printf("The total count of lines is: %d\n", line_count + 1);
	printf("The total count of characters is: %d\n", char_count);

	return 0;
}
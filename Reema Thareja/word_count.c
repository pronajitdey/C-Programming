#include <stdio.h>

int main(void)
{
	int i = 0, count = 0;
	char str[100];
	printf("Enter the sentence: ");
	gets(str);
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			count++;
		}
		i++;
	}
	printf("The total count of words is: %d", count + 1);
	return 0;
}
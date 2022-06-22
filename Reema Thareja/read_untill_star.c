#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[100];

	printf("Enter * to end\n");
	printf("Enter the text: ");
	scanf("%c", &str[i]);

	while (str[i] != '*')
	{
		i++;
		scanf("%c", &str[i]);
	}

	str[i] = '\0';
	printf("The text is: ");

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\nThe count of characters is: %d", i);

	return 0;
}
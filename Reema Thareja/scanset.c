#include <stdio.h>

int main(void)
{
	char str[10];
	printf("Enter string: ");
	scanf("%[A-Z]", str);

	// Reads only upper case characters
	printf("The string is: %s", str);

	return 0;
}
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name1[50], name2[50];
	printf("Enter name 1: ");
	scanf("%s", name1);

	printf("Enter name 2: ");
	scanf("%s", name2);

	// Concatenate two strings
	printf("%s is a friend of %s", name1, name2);

	return 0;
}
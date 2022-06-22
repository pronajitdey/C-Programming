#include <stdio.h>

int isPalindrome(int n);

int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	if (isPalindrome(num))
	{
		printf("The number is a palindrome\n");
	}
	else
	{
		printf("The number is not a palindrome\n");
	}

	return 0;
}

int isPalindrome(int n)
{
	int reversed_num = 0, remainder, temp = n;
	while (temp != 0)
	{
		remainder = temp % 10;
		reversed_num = reversed_num * 10 + remainder;
		temp /= 10;
	}

	if (n == reversed_num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
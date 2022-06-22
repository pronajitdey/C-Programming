// Takes one char and one int param and returns a float
#include <stdio.h>

float mixin(char c, int n);

int main(void)
{
	int n = 20;
	char c = 'A';

	float f = mixin(c, n);
	printf("%f", f);

	return 0;
}

float mixin(char c, int n)
{
	float f = (float) (c + n);
	return f;
}
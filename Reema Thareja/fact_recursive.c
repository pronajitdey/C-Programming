#include <stdio.h>

int Factorial(int n);

int main()
{
    int n;
    printf("Enter the number you want Factorial of: ");
    scanf("%d", &n);

    printf("The Factorial of %d = %d\n", n, Factorial(n));

    return 0;
}

int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        // 0! and 1! is 1
        return 1;
    }
    else
    {
        return (n * Factorial(n - 1));
    }
}
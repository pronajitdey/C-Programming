#include <stdio.h>

int Factorial(int n);

int main()
{
    int n;
    printf("Enter the number you want factorial of: ");
    scanf("%d", &n);

    printf("The factorial of %d = %d", n, Factorial(n));

    return 0;
}

int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int res = 1;
        for (int i = n; i > 0; i--)
        {
            res *= i;
        }
        return res;
    }
}
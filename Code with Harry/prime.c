#include <stdio.h>

int is_prime(int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d", is_prime(num));

    return 0;
}

int is_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
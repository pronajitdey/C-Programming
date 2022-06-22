// Print the prime factors of a number
#include <stdio.h>

int main()
{
    int num, isprime;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find all factors
    for (int i = 2; i <= num / 2; i++)
    {
        // Check whether i is a factor of num
        if (num % i == 0)
        {
            // Check whether the factor is prime or not
            isprime = 1;

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isprime = 0;
                    break;
                }
            }

            // If 'i' is prime and a factor of num
            if (isprime == 1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}

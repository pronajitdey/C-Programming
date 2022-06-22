// Program to count and print the number of positive and negative numbers in a given set of numbers

#include <stdio.h>

int main()
{
    int num_limit;
    int pos = 0;
    int neg = 0;

    printf("Enter number limit: ");
    scanf("%d", &num_limit);

    printf("Enter %d numbers\n", num_limit);

    int n;
    for (int i = 0; i < num_limit; i++)
    {
        scanf("%d", &n);

        if (n > 0)
        {
            pos++;
        }
        else if (n < 0)
        {
            neg++;
        }
        else
        {
            break;
        }
    }
    
    printf("In the given set there are %d positive numbers and %d negative numbers\n", pos, neg);

    return 0;
}
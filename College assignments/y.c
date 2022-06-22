#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, n;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n == 1)
    {
        y = 1 + pow(x, 2);
    }
    else if (n == 2)
    {
        y = 1 + ((float) x / n);
    }
    else if (n == 3)
    {
        y = 1 + (2 * x);

    }
    else if (n > 3 || n < 1)
    {
        y = 1 + (n * x);
    }

    printf("y = %d", y);

    return 0;
}
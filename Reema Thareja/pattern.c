#include <stdio.h>

#define N 5

int main()
{
    int i, j, k, l;
    for (i = 1; i <= N; i++)
    {
        for (j = N; j > i; j--)
        {
            printf(" ");
        }

        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        // Here value of k is i+1 due to unary operator k++
        for (l = k - 2; l > 0; l--)
        {
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}

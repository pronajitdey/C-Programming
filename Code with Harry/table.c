#include <stdio.h>

int main()
{
    for (int i = 2; i <= 15; i++)
    {
        printf("The table of %d is:\n", i);

        for (int j = 1; j <= 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("========================\n");
    }

    return 0;
}
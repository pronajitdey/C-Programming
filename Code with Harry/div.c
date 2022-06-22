#include <stdio.h>

int main()
{
    for (int i = 1; i * 1001 <= 10000; i++)
    {
        printf("%d\t", i * 1001);
    }

    printf("\n");

    return 0;
}

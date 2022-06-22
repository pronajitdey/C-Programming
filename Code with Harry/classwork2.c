#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = -234; i <= 456; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}

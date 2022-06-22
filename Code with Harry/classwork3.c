#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = -233; i < 456; i += 2)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}

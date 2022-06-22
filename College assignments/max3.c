#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Maximum is %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Maximum is %d\n", b);
    }
    else
    {
        printf("Maximum is %d\n", c);
    }

    return 0;
}

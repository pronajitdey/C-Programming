#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Check for the larger number
    if (a > b)
    {
        printf("%d is maximum\n", a);
    }
    else
    {
        printf("%d is maximum\n", b);
    }

    return 0;
}

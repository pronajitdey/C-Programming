#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += 1.0 / (i + 1);
    }

    printf("Sum is %f", sum);

    return 0;
}
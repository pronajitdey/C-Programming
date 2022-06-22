#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter last number of series, n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;
    printf("Sum of the series = %d\n", sum);

    return 0;
}

#include <stdio.h>

int Fact(int num);

int main()
{
    int n, r;
    float result;
    scanf("%d %d", &n, &r);

    result = (float) Fact(n) / Fact(n - r);
    printf("%f", result);
    return 0;
}

int Fact(int num)
{
    int f = 1, i;
    for (i = num; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}
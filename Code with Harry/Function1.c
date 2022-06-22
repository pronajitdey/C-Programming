/* Compute F(x, y) where
    F(x, y) = F(x - y, y) + 1 if y < x
    And F(x, y) = 0 if x < y
*/
#include <stdio.h>

int Function(int a, int b);

int main()
{
    int x, y;
    printf("Enter two values x and y respectively:\n");
    scanf("%d %d", &x, &y);

    printf("%d\n", Function(x, y));

    return 0;
}

int Function(int a, int b)
{
    if (a > b)
    {
        int res = Function(a - b, b) + 1;
        return res;
    }
    else if (a < b)
    {
        return 0;
    }
}

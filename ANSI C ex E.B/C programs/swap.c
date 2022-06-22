#include <stdio.h>

int main()
{
    int a, b;
    printf("Before swap:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("\n");

    int c = a + b;
    a = c - a;
    b = c - b;

    printf("After swap:\na = %d\nb = %d\n", a, b);

    return 0;
}

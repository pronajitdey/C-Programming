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

    // Swap the numbers
    int c = a;
    a = b;
    b = c;

    printf("After swap:\na = %d\nb = %d\n", a, b);

    return 0;
}

#include <stdio.h>

int main()
{
    int p, r, t, si;

    printf("Enter Principal: ");
    scanf("%d", &p);
    printf("Enter rate: ");
    scanf("%d", &r);
    printf("Enter year: ");
    scanf("%d", &t);
    printf("\n");

    si = (p * r * t) / 100;

    printf("Simple interest = %d\n", si);

    return 0;
}

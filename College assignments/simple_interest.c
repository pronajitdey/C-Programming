#include <stdio.h>

int main()
{
    // Declare variables for principal, rate, time, simple interest
    int p, r, t;
    float si;

    printf("Enter Principal: ");
    scanf("%d", &p);
    printf("Enter rate: ");
    scanf("%d", &r);
    printf("Enter year: ");
    scanf("%d", &t);
    printf("\n");

    // Calculate simple interest
    si = (p * r * t) / 100.0;

    printf("Simple interest = %f\n", si);
    printf("\n");

    return 0;
}

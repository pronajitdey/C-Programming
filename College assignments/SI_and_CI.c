#include <stdio.h>
#include <math.h>

int main()
{
    /* Declare variables for principal(p), rate(r), no. of time periods(t), no. of times interest to be compounded per time period(n), simple interest(si) & compound interest(ci) */
    int p, t, n;
    float r, si, ci;

    // Prompt user to enter data
    printf("Enter Principal: ");
    scanf("%d", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter no. of time periods: ");
    scanf("%d", &t);
    printf("Enter number of compounds per period: ");
    scanf("%d", &n);
    printf("\n");

    // Calculate simple interest
    si = (p * r * t) / 100.0;

    // Calculate compound interest
    float ci_amt = p * pow((1 + (r / n)), (n * t));
    ci = ci_amt - p;

    printf("Simple interest = %.3f\n", si);
    printf("Compound interest = %.3f\n\n", ci);

    return 0;
}

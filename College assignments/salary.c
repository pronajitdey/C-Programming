#include <stdio.h>

int main()
{
    // Declare variables for Basic Pay, DA, HRA, Total Salary
    float bp, da, hra, total;

    // Prompt user to enter Basic Pay
    printf("Enter Basic Salary: ");
    scanf("%f", &bp);

    // DA = 12%, HRA = 10%
    da = (12.0 / 100) * bp;
    hra = (10.0 / 100) * bp;

    total = bp + da + hra;

    printf("Total salary = %.2f\n", total);

    return 0;

}
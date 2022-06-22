#include <stdio.h>

int main()
{
    int units;
    float amount;
    printf("Enter consumption in units: ");
    scanf("%d", &units);

    if (units >= 0 && units <= 200)
    {
        amount = 0.50 * units;
        printf("Amount = Rs. %.2f\n", amount);
    }
    else if (units > 200 && units <= 400)
    {
        amount = 100 + (0.65 * (units - 200));
        printf("Amount = Rs. %.2f\n", amount);
    }
    else if (units > 400 && units <= 600)
    {
        amount = 250 + (0.8 * (units - 400));
        printf("Amount = Rs. %.2f\n", amount);
    }
    else if (units > 600)
    {
        amount = 425 + (1.25 * (units - 600));
        printf("Amount = Rs. %.2f\n", amount);
    }

    return 0;
}

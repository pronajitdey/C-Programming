#include <stdio.h>

int main()
{
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);

    int years, weeks;
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
#include <stdio.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 100 == 0 && year % 400 == 0)
    {
        printf("%d is leap year\n", year);
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        printf("%d is leap year\n", year);
    }
    else
    {
        printf("%d is not leap year\n", year);
    }

    return 0;
}
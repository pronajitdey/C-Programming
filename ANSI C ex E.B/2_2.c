#include <stdio.h>

int main()
{
    float rupees, paise;
    printf("Enter price of an item in rupees: ");
    scanf("%f", &rupees);

    paise = rupees * 100;

    printf("%.0f paise", paise);

    return 0;
}
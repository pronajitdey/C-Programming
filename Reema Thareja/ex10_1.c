#include <stdio.h>

int main()
{
    float num1;
    int num2;

    printf("Enter floating point number: ");
    scanf("%f", &num1);
    printf("Enter integer number: ");
    scanf("%d", &num2);

    if (num1 > 3.14)
    {
        printf("integer = %d", num2 + 10);
    }
    else
    {
        printf("integer = %d", num2);
    }

    return 0;
}

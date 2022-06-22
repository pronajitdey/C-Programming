#include <stdio.h>

int main()
{
    int num1, num2, min, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    min = (num1 < num2) ? num1 : num2;
    temp = min;

    while (1)
    {
        if (num1 % min == 0 && num2 % min == 0)
        {
            printf("The HCF of %d and %d = %d", num1, num2, min);
            break;
        }
        --min;
    }
}

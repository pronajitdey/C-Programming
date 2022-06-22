#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("\n");
    printf("Before swapping:-\n");
    printf("num1 = %d\nnum2 = %d\n\n", num1, num2);

    // Swap the numbers
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping:-\n");
    printf("num1 = %d\nnum2 = %d\n\n", num1, num2);

    return 0;
}
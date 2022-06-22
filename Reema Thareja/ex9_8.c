// Read floating point number and display the rightmost digit of the integral part of the number
#include <stdio.h>

int main()
{
    float num;
    printf("Enter a floating point number: ");
    scanf("%f", &num);

    printf("%i\n", (int) num % 10);

    return 0;
}

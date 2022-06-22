#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in degree Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (5.0 / 9);

    printf("Temperature in Celsius = %f degrees\n\n", celsius);

    return 0;
}

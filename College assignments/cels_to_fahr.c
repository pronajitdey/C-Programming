#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in degree Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * (9.0 / 5)) + 32;

    printf("Temperature in Fahrenheit = %f degrees\n\n", fahrenheit);

    return 0;
}

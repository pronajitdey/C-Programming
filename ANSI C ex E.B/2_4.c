#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter two numbers:\n");
    scanf("%f %f", &a, &b);

    printf("First number is %f\n", a);
    printf("Second number is %f\n", b);
    printf("Their quotient is %f\n", a / b);

    return 0;

}
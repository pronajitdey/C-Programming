// Calculate hypotenuse of a right-angled triangle
#include <stdio.h>
#include <math.h>

float Hypotenuse(float perp, float base);

int main()
{
    float perpendicular, base, hypotenuse;
    printf("Enter perpendicular: ");
    scanf("%f", &perpendicular);
    printf("Enter base: ");
    scanf("%f", &base);

    printf("Hypotenuse = %.2f", Hypotenuse(perpendicular, base));

    return 0;
}

float Hypotenuse(float perp, float base)
{
    float hyp = sqrt(pow(perp, 2) + pow(base, 2));
    return hyp;
}
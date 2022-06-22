#include <stdio.h>
#include <math.h>

int main()
{
    // Declare three sides of the triangle
    int a, b, c;
    printf("Enter three sides of triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Check whether the sides form a triangle
    if (a + b <= c || b + c <= a || c + a <= b)
    {
        printf("The sides you entered don't form a triangle\n");
        return 1;
    }

    // Declare semi-perimeter(s) of triangle
    float s = (a + b + c) / 2.0;

    // Calculate area
    float area = pow(s * (s - a) * (s - b) * (s - c), 0.5);

    printf("Area of the triangle = %f sq. units\n", area);

    return 0;
}

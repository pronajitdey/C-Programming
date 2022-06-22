#include <stdio.h>

const float PIE = 3.14;

int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);

    float perimeter = 2 * PIE * r;
    float area = PIE * r * r;

    printf("Perimeter of the Circle = %f inches\n", perimeter);
    printf("Area of the Circle = %f square inches\n", area);

    return 0;
}
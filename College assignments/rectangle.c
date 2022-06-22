#include <stdio.h>

int main()
{
    float l, b;
    printf("Enter length and breadth of the rectangle respectively:\n");
    scanf("%f %f", &l, &b);

    float perimeter, area;
    perimeter = 2 * (l + b);
    area = l * b;

    printf("Perimeter = %.4f\n", perimeter);
    printf("Area = %.4f\n", area);

    return 0;
}

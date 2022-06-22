#include <stdio.h>

const float PIE = 3.14;

int main()
{
    float rad, area, perimeter;
    
    printf("Enter radius: ");
    scanf("%f", &rad);

    perimeter = 2 * PIE * rad;
    area = PIE * (rad * rad);

    printf("Perimeter = %.4f\n", perimeter);
    printf("Area = %.4f\n", area);

    return 0;
}

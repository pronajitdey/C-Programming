#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    printf("Enter the coefficients a, b, c respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    int discriminant = pow(b, 2) - (4 * a * c);

    if (discriminant > 0) {
        float root1, root2;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different\n");
        printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);

    } else if (discriminant == 0) {
        float roots;
        roots = - (float) b / (2 * a);
        printf("Roots are real and equal\n");
        printf("Root1 = Root2 = %.2f\n", roots);

    } else {
        float real_part, imaginary_part;
        real_part = - (float) b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary\n");
        printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", real_part, imaginary_part, real_part, imaginary_part);        
    }

    return 0;
}

#include <stdio.h>

int main()
{
    // Prompt user for two numbers
    printf("Enter two numbers:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\n");

    // Perform basic operations
    printf("sum is %d\n", a + b);
    printf("difference is %d\n", a - b);
    printf("product is %d\n", a * b);
    printf("quotient is %f\n", (float)a / b);
    printf("\n");
    
    return 0;
}

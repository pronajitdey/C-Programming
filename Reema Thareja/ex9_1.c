// Display integer in decimal, octal, hexadecimal form
#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%f\n", (float) n);
    printf("%o\n", n);
    printf("%#x\n", n);

    return 0;
}
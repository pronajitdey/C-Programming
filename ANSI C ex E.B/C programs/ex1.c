/* Print a multiplication table of a number entered by the user in pretty form */
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &n);

    printf("Table of %d:\n", n);
    printf("%d * 1 = %d\n", n, n);
    printf("%d * 2 = %d\n", n, n * 2);
    printf("%d * 3 = %d\n", n, n * 3);
    printf("%d * 4 = %d\n", n, n * 4);
    printf("%d * 5 = %d\n", n, n * 5);
    printf("%d * 6 = %d\n", n, n * 6);
    printf("%d * 7 = %d\n", n, n * 7);
    printf("%d * 8 = %d\n", n, n * 8);
    printf("%d * 9 = %d\n", n, n * 9);
    printf("%d * 10 = %d\n", n, n * 10);

    return 0;
}

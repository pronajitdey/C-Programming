#include <stdio.h>

/* Print a multiplication table of a number entered by the user in pretty form */

int main()
{
    int n;
    printf("Enter the number you want multiplication table of :\n");
    scanf("%d", &n);

    printf("Table of %d:\n", n);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i + 1, n * (i + 1));
    }

    return 0;
}

// Test if a given number is a power of 2
// A number x is a power of 2 if x != 0 and (x & (x - 1)) == 0
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num != 0 && (num & (num - 1)) == 0)
    {
        printf("%d is a power of 2\n", num);
    }
    else
    {
        printf("%d is not a power of 2\n", num);
    }

    return 0;
}

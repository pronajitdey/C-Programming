// Read an integer number and print the reverse of this number
#include <stdio.h>

void reverse_num(int n);

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    reverse_num(num);

    return 0;
}

void reverse_num(int n)
{
    if (n == 0)
    {
        printf("\n");
    }
    else
    {
        printf("%d", n % 10);
        reverse_num(n / 10);
    }
}
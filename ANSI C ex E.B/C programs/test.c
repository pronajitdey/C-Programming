// Taking runtime input
#include<stdio.h>

int main()
{
    printf("Enter two numbers:\n");
    int a, b, sum;
    // Static input: Taking input in the code
    //a = 10;
    //b = 20;
    //sum = a + b;
    // Runtime/Dynamic input
    scanf("%d %d", &a, &b); // scanf function is used to take input at runtime
    sum = a + b;
    // a = 10, b = 20, sum = 30
    printf("a = %d, b = %d, sum = %d", a, b, sum);

    return 0;
}

/* Assignment 1
1. WAP of simple calculator by taking runtime input
2. WAP of simple interest
3. WAP to swap two numbers
4. WAP to find sum of the series 1+2+3+4+5+...+n, where n is taken at runtime
*/

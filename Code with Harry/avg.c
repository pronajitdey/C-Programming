#include <stdio.h>

float avg(int num);

int main()
{
    int n;
    printf("Enter last number: ");
    scanf("%d", &n);

    printf("%.2f\n", avg(n));

    return 0;
}

float avg(int num)
{
    int sum = 0, counter = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
        ++counter;
    }

    float avg = (float) sum / counter;

    return avg;
}
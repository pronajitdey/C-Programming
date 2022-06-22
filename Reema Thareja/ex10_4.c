// Program to print the Floyd's triangle
/* Floyd's triangle is a triangular array of natural numbers
    1
    2 3
    4 5 6
    7 8 9 10
*/

#include <stdio.h>

int main()
{
    int height, num = 0;
    printf("Enter height of Floyd's triangle: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            num += 1;
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}
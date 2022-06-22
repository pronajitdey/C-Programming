#include <stdio.h>

int main()
{
    int mat[3][3];
    printf("Enter the elements of the matrix\n");
    printf("********************************\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The elements of the matrix are\n");
    printf("********************************\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}
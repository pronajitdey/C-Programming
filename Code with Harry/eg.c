// Merge two sorted arrays

#include <stdio.h>

int main()
{
    int n1, n2, m, arr1[10], arr2[10], arr3[20];
    int i;
    int index = 0, index_first = 0, index_second = 0;

    // Array 1
    printf("Enter the number of elements in array1: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Array 2
    printf("Enter the number of elements in array2: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr2[i]);
    }

    m = n1 + n2;

    while (index_first < n1 && index_second < n2)
    {
        if (arr1[index_first] < arr2[index_second])
        {
            arr3[index] = arr1[index_first];
            index_first++;
        }
        else
        {
            arr3[index] = arr2[index_second];
            index_second++;
        }

        index++;
    }

    /* If elements of the first array are over and the second array has some elements */
    if (index_first == n1)
    {
        while (index_second < n2)
        {
            arr3[index] = arr2[index_second];
            index_second++;
            index++;
        }
    }

    /* If elements of the second array are over and the first array has some elements */
    if (index_second == n2)
    {
        while (index_first < n1)
        {
            arr3[index] = arr1[index_first];
            index_first++;
            index++;
        }
    }

    printf("The contents of the merged array are\n");
    for (i = 0; i < m; i++)
    {
        printf("Arr(%d) = %d\n", i, arr3[i]);
    }

    return 0;
}

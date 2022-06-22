#include <stdio.h>

int main()
{
    int arr[10], n, num, beg, end, mid, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to be searched: ");
    scanf("%d", &num);

    beg = 0, end = n - 1;

    while (beg != end)
    {
        mid = (beg + end) / 2;

        if (arr[mid] == num)
        {
            printf("%d is present in the array at position = %d\n", num, mid);
            found = 1;
            break;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    if (beg >= end && found == 0)
    {
        printf("%d does not exist in the array", num);
    }

    return 0;
}

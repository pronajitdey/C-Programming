// Read 10 integers and desplay these numbers by printing three numbers in a line separated by commas
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    printf("Enter 10 integers:\n");
    scanf(" %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);

    printf("%d, %d, %d\n%d, %d, %d\n%d, %d, %d\n%d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);

    return 0;
    
}

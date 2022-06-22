#include <stdio.h>

int main()
{
    // Prompt user to enter marks of Physics, Mathematics & Chemistry
    int phy, maths, chem;
    printf("Enter Physics marks: ");
    scanf("%d", &phy);
    printf("Enter Mathematics marks: ");
    scanf("%d", &maths);
    printf("Enter Chemistry marks: ");
    scanf("%d", &chem);

    // Calculate total & average marks
    int total = phy + maths + chem;
    float avg = (phy + maths + chem) / 3.0;

    printf("Total marks = %d\n", total);
    printf("Average marks = %.4f\n", avg);

    return 0;
}

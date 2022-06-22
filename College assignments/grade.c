#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Grade is O\n");
    }
    else if (marks >= 80)
    {
        printf("Grade is E\n");
    }
    else if (marks >= 70)
    {
        printf("Grade is A\n");
    }
    else if (marks >= 60)
    {
        printf("Grade is B\n");
    }
    else if (marks >= 50)
    {
        printf("Grade is C\n");
    }
    else if (marks >= 40)
    {
        printf("Grade is D\n");
    }
    else if (marks < 40)
    {
        printf("Grade is F(Failed)\n");
    }

    return 0;

}
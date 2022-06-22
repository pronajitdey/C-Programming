// Calculate the age of the user
#include <stdio.h>

int main()
{
    int curr_day, curr_month, curr_year, dob_day, dob_month, dob_year, age_day, age_month, age_year;
    printf("Enter current date: ");
    scanf("%d/%d/%d", &curr_day, &curr_month, &curr_year);
    printf("Enter DOB: ");
    scanf("%d/%d/%d", &dob_day, &dob_month, &dob_year);

    age_year = curr_year - dob_year;
    
    if (curr_month < dob_month)
    {
        curr_month += 12;
        age_month = curr_month - dob_month;
    }
    else
    {
        age_month = curr_month - dob_month;
    }



}
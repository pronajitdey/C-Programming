#include <stdio.h>

int main()
{
    char conversion;
    float num1, num2;
    float kms_to_miles = 0.621371;
    float inches_to_foot = 0.0833333;
    float cms_to_inches = 0.393701;
    float pound_to_kgs = 0.453592;
    float inches_to_meters = 0.0254;
    
    int conts = 1;    
    while (conts == 1)
    {
        // Ask the user for the conversion
        printf("Enter the corresponding S.No. of a conversion to perform, press q to exit\n        a. kms to miles\n        b. inches to foot\n        c. cms to inches\n        d. pound to kgs\n        e. inches to meters\n");
        scanf(" %c", &conversion);
    
        switch (conversion)
        {
            case 'a':
                printf("Enter the value of the quantity: ");
                scanf("%f", &num1);
                num2 = num1 * kms_to_miles;
                printf("%f kms = %f miles\n\n", num1, num2);           
                break;

            case 'b':
                printf("Enter the value of the quantity: ");
                scanf("%f", &num1);
                num2 = num1 * inches_to_foot;
                printf("%f inches = %f foot\n\n", num1, num2);           
                break;

            case 'c':
                printf("Enter the value of the quantity: ");
                scanf("%f", &num1);
                num2 = num1 * cms_to_inches;
                printf("%f cms = %f inches\n\n", num1, num2);           
                break;

            case 'd':
                printf("Enter the value of the quantity: ");
                scanf("%f", &num1);
                num2 = num1 * pound_to_kgs;
                printf("%f pound = %f kgs\n\n", num1, num2);           
                break;

            case 'e':
                printf("Enter the value of the quantity: ");
                scanf("%f", &num1);
                num2 = num1 * inches_to_meters;
                printf("%f inches = %f meters\n\n", num1, num2);           
                break;

            case 'q':
                conts = 0;
                break;

            default:
                break;
        }
    }

    return 0;

}

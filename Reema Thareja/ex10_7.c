//Display the sin(x) value
#include <stdio.h>
#include <math.h>

int main()
{
    for (int x = 0; x <= 360; x += 15)
    {
        printf("%f\n", sin(x));
    }
    return 0;
}
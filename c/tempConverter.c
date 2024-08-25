#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temp in Fareinheit is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temp in Fareinheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) *5) /9; 
        printf("The temp in Celsius is: %.1f", temp);
    }
    else
    {
        printf("wrong temperature format %c", unit);
    }

    return 0;
}

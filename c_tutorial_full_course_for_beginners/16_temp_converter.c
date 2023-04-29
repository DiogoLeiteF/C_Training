#include <stdio.h>
#include <ctype.h>


int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'F')
    {
        printf("\nEnter temperature value in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32.00) * 5) / 9 ; 
        printf("%.2f Celsius", temp);
    }
    else if (unit == 'C')
    {
        printf("\nEnter temperature value in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32.00;
        printf("%.2f Farenheit", temp);
    }
    else
    {
        printf("\n%c is NOT a valid unit", unit);
    };
    
    
    
    
    
    return 0;
}
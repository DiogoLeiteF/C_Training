#include <stdio.h>

int main(int argc, char const *argv[])
{
    float hours;
    float payRateHour = 12.00;
    float payRateExtra = 18.00;
    float gross = 0;
    float taxes = 0;
    float netPay = 0;

    printf("Enter the total number of hours worked this week: ");
    scanf("%f", &hours);

    if (hours <= 40)
    {
        gross = hours * payRateHour;
    }
    else
    {
        gross = 40 * payRateHour + ((hours - 40) * payRateExtra);
    }

    if (gross <= 300)
    {
        taxes = 300 * 0.15;
        printf("<=300");
    }
    else
    {
        if (gross <= 450)
        {
            taxes = 300 * 0.15 + ((gross - 300) * 0.20);
            printf("<=450");
        }
        else
        {
            taxes = 300 * 0.15 + 150 * 0.20 + ((gross - 300 - 150) * 0.25);
            printf(">450");
        }
    }

    netPay = gross - taxes;

    printf("\nGross pay: %.2f", gross);
    printf("\nTaxes: %.2f", taxes);
    printf("\nNet pay: %.2f", netPay);

    return 0;
}

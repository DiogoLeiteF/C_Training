#include <stdio.h>
#include <stdlib.h>

# define MONTHS 12
# define YEARS 5


int main(int argc, char const *argv[])
{
    double rainfall[YEARS][MONTHS] = {
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 5.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 4.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 3.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 2.7},
      
    };    
    double totalYear = 0;
    double subTotal = 0;
    

    printf("YEAR:\tRainfall\n");

    for (int i = 0; i < YEARS; i++){
        for (int j = 0; j < MONTHS; j++)
        {
            totalYear += rainfall[i][j];
        }
        printf("%d\t%.1f\n", 2010 + i, subTotal);
        totalYear += subTotal;
        subTotal = 0;
    }
    
    printf("The yearly aaverage is %.2f in inches\n", subTotal/YEARS);

    printf("\njan  feb  mar  apr  may  jun  jul  aug  sep  oct  nov  dec\n");
    for (int i = 0; i < MONTHS; i++)
    {
        for (int j = 0; j < YEARS; j++)
        {
            subTotal += rainfall[j][i]; 
        }
        printf("%.1f  ", subTotal/YEARS);
        subTotal = 0;
    }
    






    return 0;
}

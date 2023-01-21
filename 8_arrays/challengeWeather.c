#include <stdio.h>

int main(int argc, char const *argv[])
{
    float rainfall[5][12] = {
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
      
    };    

    float rain10 = 0;
    float rain11 = 0;
    float rain12 = 0;
    float rain13 = 0;
    float rain14 = 0;

    float month1;
    float month2;
    float month3;
    float month4;
    float month5;
    float month6;
    float month7;
    float month8;
    float month9;
    float month10;
    float month11;
    float month12;

    for (int i = 0; i < 12; i++)
    {
        rain10 += rainfall[0][i]; 
        rain11 += rainfall[1][i]; 
        rain12 += rainfall[2][i]; 
        rain13 += rainfall[3][i]; 
        rain14 += rainfall[4][i]; 
    }

    printf("\nYEAR\tRAINFALL");
    printf("\n2010\t  %.1f", rain10);
    printf("\n2011\t  %.1f", rain11);
    printf("\n2012\t  %.1f", rain12);
    printf("\n2013\t  %.1f", rain13);
    printf("\n2014\t  %.1f", rain14);

    for (int i = 0; i < 5; i++)
    {
        month1 += rainfall[i][0];
        month2 += rainfall[i][1];
        month3 += rainfall[i][2];
        month4 += rainfall[i][3];
        month5 += rainfall[i][4];
        month6 += rainfall[i][5];
        month7 += rainfall[i][6];
        month8 += rainfall[i][7];
        month9 += rainfall[i][8];
        month10 += rainfall[i][9];
        month11 += rainfall[i][10];
        month12 += rainfall[i][11];
    }
    
    printf("\njan\tfeb\tmar\tapr\tmay\tjun\tjul\taug\tset\toct\tnov\tdec");
    printf("\n%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t", month1/12, month2/12, month3/12, month4/12, month5/12, month6/12, month7/12, month8/12, month9/12, month10/12, month11/12, month12/12);






    return 0;
}

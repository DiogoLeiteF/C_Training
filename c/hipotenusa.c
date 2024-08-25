#include <stdio.h>
#include <math.h>


int main(){
    double heigth;
    double width;
    double hypo;

    printf("heigth: ");
    scanf("%lf", &heigth);
    printf("width: ");
    scanf("%lf", &width);
    
    hypo = sqrt(pow(heigth, 2) + pow(width, 2));

    printf("\nhypo: %.2lf", hypo);
    

    return 0;
}
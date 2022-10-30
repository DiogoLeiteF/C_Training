#include <stdio.h>
#include <math.h>


int main(){
    double height;
    double width;
    double hypo;

    printf("\nEnter the height of the triangle: ");
    scanf("%lf", &height);
    printf("\nEnter the width of the triangle: ");
    scanf("%lf", &width);

    hypo = sqrt(height * height + width * width);

    printf("\nThe hypothenuse is: %lf", hypo);

    return 0;
}
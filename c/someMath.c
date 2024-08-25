#include <stdio.h>
#include <math.h>


int main(){
    double A = sqrt(9);
    double B = pow(2, 3);
    double C = round(3.14);
    double D = ceil(9.5);
    double E = floor(9.5);
    double F = fabs(-19.1);
    double G = log(9);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\nsqrt 9 = %lf", A);
    printf("\n2 to the power of 3 = %lf", B);
    printf("\nround 3.14 = %lf", C);
    printf("\nceil 9.5 = %lf", D);
    printf("\nfloor 9.5 = %lf", E);
    printf("\nabsolute -19.1 = %lf", F);
    printf("\nlog 9 = %lf", G);
    printf("\nsin 45= %lf", H);
    printf("\ncos 45 = %lf", I);
    printf("\ntan 45= %lf", J);

    return 0;
}
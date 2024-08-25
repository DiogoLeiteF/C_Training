#include <stdio.h>


int main(){
    const double PI = 3.14;
    double raio;
    double circ;
    double area;

    printf("Insira o raio da circunferencia: ");
    scanf("%lf", &raio);
    circ = PI * (raio*2);
    area = PI * (raio * raio);

    printf("\nA ciscunferencia é: %.2lf", circ);
    printf("\nA area é: %.2lf", circ);

    return 0;
}
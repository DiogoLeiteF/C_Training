#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    int x;
    double d;

    printf("Introduza um caracter: ");
    scanf("%c", &c);
    printf("Introduza um inteiro: ");
    scanf("%d", &x);
    printf("Introduza um real: ");
    scanf("%lf", &d);

    printf("Valores instroduzidos: %c %d %f", c, x, d);
    return 0;
}   

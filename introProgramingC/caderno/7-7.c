#include <stdio.h>

int main()
{
    int diasDaSemana[7];
    int total = 0, i;
    char str[10];
    char prompt[7][] = {
        "Segunda: ",
        "Terca: ",
        "Quarta: ",
        "Quinta: ",
        "Sexta: ",
        "Sabado: ",
        "Domingo: "};

    /* introdução de valores */
    for (i = 0; i < 7; i++)
    {
        printf(prompt[i]);
        scanf("%d", &diasDaSemana[i]);
    }

    /* calculos */
    for (i = 0; i < 7; i++)
        total += diasDaSemana[i];
    printf("Soma: %d\n", total);
    printf("Media: %f\n", total / 7.0);
}
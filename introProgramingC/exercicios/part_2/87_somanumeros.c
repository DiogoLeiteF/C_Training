#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    double soma = 0;
    char *in;

    printf("Introcuza um conjunto de numeros reais separados por espaços: \n");
    gets(in);

    // printf("%s", in);

    // returns first token (first string until " ")
    char *token = strtok(in, " ");

    while (token != NULL)
    {
        soma += atof(token);
        token = strtok(NULL, " ");
    }

    printf("%.15g", soma);



    return 0;
}
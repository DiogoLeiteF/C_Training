#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "header.h"
#include "leitura_dados.h"


char codigo[5];
char quantidade[10];
char designacao[30];
char preco[7];


void removerVirgulas(char *string)
{
    int len = strlen(string);
    for (int i = 0; i < len; i++)
    {
        if (string[i] == ',')
            string[i] = '.';
    }
}

void pedirCodigo(char *filename, int codigoDuplicado)
{
    int val = 0;
    while (val == 0)
    {
        printf("\nIntroduza o codigo do produto de 5 digitos: ");
        scanf("%s", codigo);
        getchar();
        if (strlen(codigo) == 5)
        {
            val = 1;

            for (int i = 0; i < 5; i++)
            {
                if (isdigit(codigo[i]) == 0)
                {
                    printf("formato errado para o codigo, insira apenas digitos\n");
                    val = 0;
                    break;
                }
            }
        }
        // comparar os dados em memoria para verificar se o codigo não é repetido
        if (codigoDuplicado == 1)
        {
            readFile(filename); // abrir o ficheiro para ficar com os dados em memoria
            for (int i = 1; i < numLinhasStock; i++)
            {
                if (strcmp(arrayStock[i][0], codigo) == 0)
                {
                    val = 0;
                    printf("Codigo já existe na base de dados, altere o codigo");
                }
            }
        }
    }
}

void pedirQuantidade()
{
    int val = 0;
    while (val == 0)
    {
        printf("\nIntroduza a quantidade: ");
        scanf("%s", quantidade);
        getchar();

        val = 1;

        for (int i = 0; i < ((int)strlen(quantidade)); i++)
        {
            if (isdigit(quantidade[i]) == 0)
            {
                printf("formato errado para a quantidade, insira apenas digitos\n");
                val = 0;
                break;
            }
        }
    }
}

void pedirDesignacao()
{
    int val = 0;
    while (val == 0)
    {
        val = 1;
        printf("\nIntroduza a designacao do produto: ");
        gets(designacao);
        if (strlen(designacao) > 20)
        {
            printf("Introduza no maximo 20 caracteres para a designacao\n");
            val = 0;
        }
    }
    removerVirgulas(designacao);
}

void pedirPreco()
{
    float val = 0.0;
    while (val == 0.0)
    {
        printf("\nIntroduza o preco do produto: ");
        scanf("%s", preco);
        getchar();

        val = atof(preco);

        // printf("%f\n", val);

        if (val == 0.0)
        {
            printf("formato errado para o preco (ex.: 10.50)\n");
        }
        if (strlen(codigo) > 7)
        {
            printf("formato errado para o preco, maximo 7 digitos\n");
            val = 0.0;
        }
    }

    removerVirgulas(preco);


}


void pedirValores(char *filename, int codigoDuplicado)
{
    pedirCodigo(filename, codigoDuplicado);
    pedirQuantidade();
    pedirDesignacao();
    pedirPreco();
}


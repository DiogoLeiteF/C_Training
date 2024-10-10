#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


char conteudo[100][50];

void prepararConteudo(char *filename)
{
    /* separar todo o conteudo do csv num array de arrays para poder ser manipulado (arrayConteudo[][][]);
    tambem faz a contagem do numero de colunas do documento para facilitar o futuro manuseamento */

    numColunasStock = 0;
    numColunasVendas = 0;

    if (strcmp(filename, STOCKFILE) == 0)
    {
        for (int i = 0; i < numLinhasStock; i++)
        {
            int j = 0;
            char *token = strtok(conteudo[i], ",");

            while (token != NULL)
            {
                strcpy(arrayStock[i][j], token);
                token = strtok(NULL, ",");
                j++;
                numColunasStock++;
            }
        }
        numColunasStock = numColunasStock / numLinhasStock;
    }
    else if (strcmp(filename, VENDASFILE) == 0)
    {
        for (int i = 0; i < numLinhasVendas; i++)
        {
            int j = 0;
            char *token = strtok(conteudo[i], ",");

            while (token != NULL)
            {
                strcpy(arrayVendas[i][j], token);
                token = strtok(NULL, ",");
                j++;
                numColunasVendas++;
            }
        }
        numColunasVendas = numColunasVendas / numLinhasVendas;
    }
}

void readFile(char *filename)
{
    /* faz a leitura por linhas do ficheiro csv dado como parametro para o arrayconteudo */

    char linha[50];

    if (strcmp(filename, STOCKFILE) == 0)
    {
        numLinhasStock = 0;
    }
    else if (strcmp(filename, VENDASFILE) == 0)
    {
        numLinhasVendas = 0;
    }

    FILE *fp = fopen(filename, "rt");
    if (fp == NULL)
    {
        printf("Impossivel abrir ficheiro");
        exit(0);
    }
    else
    {
        int i = 0;
        while (fgets(linha, 50, fp) != NULL)
        {
            strcpy(conteudo[i], linha);
            i++;
            if (strcmp(filename, STOCKFILE) == 0)
            {
                numLinhasStock++;
            }
            else if (strcmp(filename, VENDASFILE) == 0)
            {
                numLinhasVendas++;
            }
        }
    }
    fclose(fp);

    prepararConteudo(filename);
}

// int main()
// {
//     readFile("stock.csv");
//     readFile("vendas.csv");

//     for (int i = 0; i < numLinhasStock; i++)
//     {
//         for (int j = 0; j < numColunasStock; j++)
//         {

//             printf("%s\n", arrayStock[i][j]);
//         }
//     }

//     printf("\n\n%d\n", numLinhasStock);
//     printf("%d\n\n\n", numColunasStock);

//     for (int i = 0; i < numLinhasVendas; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {

//             printf("%s\n", arrayVendas[i][j]);
//         }
//     }

//     printf("\n\n%d\n", numLinhasVendas);
//     printf("%d\n\n\n", numColunasVendas);
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "leitura_dados.h"

/*
Pedir o codigo ou o nome ao utilizador e devolver todos os dados do produto caso exista
Caso os dados não sejam encontrados o utilizador é informado
*/
void pesquisa()
{   
    char data[30];
    char header[4][12] = {
        "Codigo",
        "Quantidade",
        "Designacao",
        "Preco",
    };

    readFile(STOCKFILE);
    printf("\nPESQUISA\n");

    printf("Indique o nome ou o codigo do produto: ");
    gets(data);

    for (int i = 1; i < numLinhasStock; i++)
    {
        for (int j = 0; j<3; j++)
        {
            if(strcmp(data, arrayStock[i][j]) == 0)
            {
                printf("Dados encontrados:\n");
                for(int k = 0; k<numColunasStock; k++)
                {
                    printf("%s : %s\n", header[k], arrayStock[i][k]);
                }
                return;
            }
        }
    }
    printf("Dados não encontrados\n");
}
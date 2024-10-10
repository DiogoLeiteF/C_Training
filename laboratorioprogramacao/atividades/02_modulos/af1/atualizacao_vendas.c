#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "header.h"
#include "inputs.h"
#include "atualizacao_stock.h"
#include "leitura_dados.h"


/*
Pede o codigo (só aceita codigos que estejam na stock.csv) e a quantidade para registar uma nova venda no arrayVendas
A data é inserida automaticamente
*/
void novaVenda()
{   

    char date[15] = "";
    char buf[5];

    printf("\nINSERIR NOVA VENDA\n");

    readFile(VENDASFILE);

    pedirCodigo(VENDASFILE, 0);

    readFile(STOCKFILE);

    for (int i = 1; i < numLinhasStock; i++)
    {
        if (strcmp(codigo, arrayStock[i][0]) == 0)

        {
            pedirQuantidade();
            

            time_t t = time(NULL);
            struct tm tm = *localtime(&t);

            strcat(date, itoa(tm.tm_year + 1900, buf, 10));
            strcat(date, "-");
            strcat(date, itoa(tm.tm_mon + 1, buf, 10));
            strcat(date, "-");
            strcat(date, itoa(tm.tm_mday, buf, 10));

            
            strcpy(arrayVendas[numLinhasVendas][0], codigo);
            strcpy(arrayVendas[numLinhasVendas][1], date);
            strcpy(arrayVendas[numLinhasVendas][2], quantidade);
            numLinhasVendas++;
            remStock(quantidade, codigo);
            return;
        }
    }
    printf("\nCodigo não existente\n\n");
}




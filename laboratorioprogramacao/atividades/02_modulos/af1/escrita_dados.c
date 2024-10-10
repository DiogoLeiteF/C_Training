#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "header.h"


/*
Escreve os dados que se encontram na memoria para o respectivo ficheiro que aceita como parametro
*/
void writefile(char *filename)
{
    FILE *fp = fopen(filename, "w+");

    if (fp == NULL)
    {
        printf("Impossivel abrir ficheiro");
        return;
    }
    else
    {
        if (strcmp(filename, STOCKFILE) == 0)
        {
            // Imprimir o cabeçalho
            fprintf(fp, "%s,%s,%s,%s", arrayStock[0][0], arrayStock[0][1], arrayStock[0][2], arrayStock[0][3]);
            for (int i = 1; i < numLinhasStock; i++)
            {
                fprintf(fp, "%s,%s,%s,%.2f\n", arrayStock[i][0], arrayStock[i][1], arrayStock[i][2], atof(arrayStock[i][3]));
            }
        }
        else if (strcmp(filename, VENDASFILE) == 0)
        {
            // Imprimir o cabeçalho
            fprintf(fp, "%s,%s,%s", arrayVendas[0][0], arrayVendas[0][1], arrayVendas[0][2]);
            for (int i = 1; i < numLinhasVendas; i++)
            {
                fprintf(fp, "%s,%s,%d\n", arrayVendas[i][0], arrayVendas[i][1], atol(arrayVendas[i][2]));
            }
        }
    }
    fclose(fp);
    printf("\nDados gravados com sucesso.\n");
}

/*
Permite adicionar um novo produto ao ficheiro stock sem a leitura previa dos dados para memoria.
*/ 
void appendToFile(char *filename)
{
    FILE *fp = fopen(filename, "a");

    if(strcmp(STOCKFILE, filename) != 0)
    {
        printf("Impossivel abrir ficheiro");
        return;
    }

    if (fp == NULL)
    {
        printf("Impossivel abrir ficheiro");
        return;
    }
    else
    {
        fprintf(fp, "%s,%s,%s,%s\n", codigo, quantidade, designacao, preco);
    }
    fclose(fp);
    printf("\nDados gravados com sucesso.\n");
}


/*
Permite-nos confirmar se queremos gravar os dados em memória ou descartar os mesmos.
Admite 2 parametros, a função a usar para a escrita e o ficheiro a ser escrito
função:
appendToFile() que funciona no caso de inserirmos um novo produto na lista stock 
writeToFile() para os restantes casos
filename: 
VENDASFILE / STOCKFILE / "2" (para gravar nos 2)
*/
void gravarDados(void (*f)(char *), char *filename)
{
    char gravar = 'N';
    printf("\nPretende guardar os dados? 'S' / 'N'  ");
    scanf("%c", &gravar);
    getchar();
    if (tolower(gravar) == 's')
    {
        if (strcmp(filename, "2") != 0)
        {
            f(filename);
        }
        else
        {
            f(STOCKFILE);
            f(VENDASFILE);
        }
    }

    else
    {
        printf("\nOs dados foram descartados.\nEscolha outra opcao\n");
    }
}

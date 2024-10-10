#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "header.h"
#include "leitura_dados.h"
#include "inputs.h"

/*
atualizar a quantidade em stock quuando se faz uma venda
*/
void remStock(char *quantidade, char *codigo)
{

    for (int i = 1; i < numLinhasStock; i++)
    {
        if (strcmp(codigo, arrayStock[i][0]) == 0)
        {
            int quant = atoi(arrayStock[i][1]) - atoi(quantidade);
            quantidade = itoa(quant, quantidade, 10);
            strcpy(arrayStock[i][1], quantidade);
        }
    }
}

void editarValores(int escolha)
{
    char *titulo[3] =
        {
            "EDITAR QUANTIDADES",
            "EDITAR DESIGNACAO",
            "EDITAR PRECO",
        };
    typedef void (*f)(void);
    f func[3] = {&pedirQuantidade, &pedirDesignacao, &pedirPreco};
    

    printf("\n%s\n", titulo[escolha - 1]);

    for (int i = 1; i < numLinhasStock; i++)
    {
        if (strcmp(arrayStock[i][0], codigo) == 0)
        {
            
            printf("Indique o novo valor...");

            func[escolha - 1]();
            if (escolha == 1)
            {
                strcpy(arrayStock[i][escolha], quantidade);
            }
            else if (escolha == 2)
            {
                strcpy(arrayStock[i][escolha], designacao);
            }
            else if (escolha == 3)
            {
                strcpy(arrayStock[i][escolha], preco);
            }
            break;
        }
    }
}

/*
pede ao utilizador 1 de 4 valores para decidir o que deve ser editado
mediante a escolha utiliza a função editarValores(int valor) para processar os dados.
*/
void editar()
{
    int escolhaEditar = 9;
    while (escolhaEditar != 0)
    {

        printf("\n###########################\nEDITAR VALORES\n");
        printf("\n# 1 => editar Quantidade");
        printf("\n# 2 => editar Designacao");
        printf("\n# 3 => editar Preco");
        printf("\n# 4 => editar Tudo\n");
        printf("Indique o numero da operacao: ");
        scanf("%d", &escolhaEditar);
        getchar();

        // obter dados do csv para verificação
        readFile(STOCKFILE);
        printf("Indique o codigo do produto a editar\n");
        pedirCodigo(STOCKFILE, 0);

        if (escolhaEditar >= 1 && escolhaEditar < 4)
        {

            editarValores(escolhaEditar);
            return;
        }
        else if (escolhaEditar == 4)
        {

            editarValores(1);
            editarValores(2);
            editarValores(3);
            return;
        }
        else
        {

            printf("Valor errado, tente outra vez.\n");
            escolhaEditar = 9;
        }
    }
}

/*
remover um produto do stock
*/
void removerProduto()
{
    printf("\nREMOVER PRODUTO\n");

    readFile(STOCKFILE);

    pedirCodigo(STOCKFILE, 0);

    for (int i = 1; i < numLinhasStock; i++)
    {

        if (strcmp(arrayStock[i][0], codigo) == 0)
        {
            for (int j = i; j < numLinhasStock - 1; j++)
            {
                for (int k = 0; k < numColunasStock; k++)
                {
                    strcpy(arrayStock[j][k], arrayStock[j + 1][k]);
                }
            }
            printf("Codigo encontrado\n");
            numLinhasStock--;
            return;
        }
    }
    printf("Codigo nao encontrado\n");
}

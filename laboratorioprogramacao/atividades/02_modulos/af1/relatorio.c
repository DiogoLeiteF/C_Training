#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
#include "inputs.h"
#include "leitura_dados.h"

/*
Retorna o preço do produto com um determinado codigo cedido como argumento
Caso o codigo nao exista retorna um float 0.0
*/
float getPreco(char *codigo)
{
    float precoProduto = 0.0;
    
    for (int i = 1; i < numLinhasStock; i++)
    {
        if (strcmp(arrayStock[i][0], codigo) == 0)
        {
            precoProduto = atof(arrayStock[i][3]);
            return precoProduto;
        }
    }
    return 0.0;
}

/*
retorna o total de vendas de um determinado codigo cedido como argumento
*/
int getVendas(char *codigo)
{
    int totalVendasProduto = 0;
    for (int i = 1; i < numLinhasVendas; i++)
    {
        if (strcmp(arrayVendas[i][0], codigo) == 0)
        {
            totalVendasProduto += atol(arrayVendas[i][2]);
        }
    }
    return totalVendasProduto;
}


/*
Imprime os dados referentes a um determinado codigo cedido como argumento
Se o codigo não existir imprime a lista de todos as vendas, caso contrario so imprime o relatorio para o codigo passado como argumento
*/
void relProduto(char *codigo)
{
    float precoProduto = getPreco(codigo);
    int totalVendasProduto = 0;
    float total = 0.0;
    int totalVendas = 0;

    //Se o preco for 0.0 consideramos que vamos imprimir a lista de todos os produtos caso contrario so imprimimos o produto passado em argumento
    if (precoProduto != 0.0)
    {
        totalVendasProduto = getVendas(codigo);

        printf("==> %s tem %d vendas, num total de %.2fEuros\n", codigo, totalVendasProduto, (precoProduto * totalVendasProduto));
    }
    else if (precoProduto == 0.0)
    {
        for (int i = 1; i < numLinhasStock; i++)
        {

            precoProduto = getPreco(arrayStock[i][0]);
            totalVendasProduto = getVendas(arrayStock[i][0]);
            total += totalVendasProduto * precoProduto;
            totalVendas += totalVendasProduto;

            printf("==> %s tem %d vendas, num total de %.2fEuros\n", arrayStock[i][0], totalVendasProduto, (precoProduto * totalVendasProduto));
        }
        printf("Total vendas ==> %d\n", totalVendas);
        printf("Total faturado ==> %.2f\n", total);
    }
}

/* 
Função oferece dois caminhos a seguir:
Relatório para um so produto ou relatório para todos os produtos em stock
*/
void relProdutos()
{
    int escolha = 0;
    readFile(STOCKFILE);
    readFile(VENDASFILE);

    printf("\nRELATORIO DE VENDAS: \n");
    printf("# 1 => relatorio de 1 unico produto\n");
    printf("# 2 => relatorio de todos os produtos em stock\n");
    printf("# Insira a opcao: \n");
    scanf("%d", &escolha);
    getchar();
    if (escolha == 1)
    {
        pedirCodigo(STOCKFILE, 0);
        relProduto(codigo);
    }
    else if(escolha ==2 )
    {
        relProduto("todos");
    }
}

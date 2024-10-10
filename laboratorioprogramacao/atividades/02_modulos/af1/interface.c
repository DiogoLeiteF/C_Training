#include <stdio.h>
#include <ctype.h>
#include "leitura_dados.h"
#include "escrita_dados.h"
#include "atualizacao_stock.h"
#include "atualizacao_vendas.h"
#include "inputs.h"
#include "pesquisa.h"
#include "relatorio.h"
#include "header.h"


char arrayStock[100][20][30];
char arrayVendas[100][20][30];
int numLinhasStock = 0;
int numColunasStock = 0;
int numLinhasVendas = 0;
int numColunasVendas = 0;



int main()
{
    int escolha = 10;
    

    printf("\nSoftware de Gestao TOP\n\n");

    while (escolha != 0)
    {
        escolha = 10;
        printf("\n################################");
        printf("\n################################");
        printf("\n\nEscolha o numero correspondente\na operacao que pretende efectuar:\n");
        printf("\n##### GESTAO DE STOCK #####\n");
        printf("# 1 => Adicionar Novo Produto\n");
        printf("# 2 => Editar Produto Existente\n");
        printf("# 3 => Remover Produto\n");
        printf("# 4 => Pesquisar Produto\n"); 
        printf("\n##### GESTAO DE VENDAS #####\n");
        printf("# 5 => Adicionar Venda de Produto\n");
        printf("# 6 => Relatorio de Vendas\n");
        printf("\n# 0 => Sair do programa\n");
        printf("\nIntroduza a sua opcao: ");

        scanf("%d", &escolha);
        getchar();

        if (escolha == 1)
        {
            // Adicionar novo produto
            pedirValores(STOCKFILE, 1);
            gravarDados(appendToFile, STOCKFILE);
        }
        else if (escolha == 2)
        {
            // Editar produto existente
            editar();
            gravarDados(writefile, STOCKFILE);
        }
        else if (escolha == 3)
        {
            // remover produto
            removerProduto();
            gravarDados(writefile, STOCKFILE);

        }
        else if (escolha == 4)
        {
            // Pesquisar produto por codigo ou nome
            pesquisa();
        }
        else if (escolha == 5)
        {
            // Adicionar venda de produto
            novaVenda();
            gravarDados(writefile, "2");
            
        }
        else if (escolha == 6)
        {
            // Relatorio de vendas
            relProdutos();
        }
        else if (escolha == 0)
        {
            break;
        }
        else
        {
            printf("escolha um valor valido\n");
        }
    }
}


/*
Enunciado (Problem 2) [Matemática: fácil | Programação: médio]
Cada novo termo na sequência de Fibonacci é gerada pela soma dos dois termos anteriores. Começando em 1 e 2, os primeiros termos são: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
Considere os termos que não excedam um dado valor K. Obtenha a soma dos termos pares.
*/

#include <stdio.h>

void main()
{
    int K, res;
    int soma = 0;
    scanf("%d", &K);

    if (K == 1 || K == 2)
    {
        res = K;
        if (res % 2 == 0)
        {
            soma += res;
        }
    }
    else
    {
        soma +=2;
        int prev_prev_res = 1;
        int prev_res = 2;
        int i = 3;
        while (i <= K && res < K)
        {
            res = prev_prev_res + prev_res;
            if (res % 2 == 0 && res <=K )
            {
                soma += res;
            }
            prev_prev_res = prev_res;
            prev_res = res;
            i++;
        }
    }
    printf("%d", soma);
}
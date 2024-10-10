#include <stdio.h>

// Calcular o valor da função fibonacci6, para um dado argumento N. Para N=1 ou 2, deve retornar N, caso contrário retorna a soma dos dois valores anteriores:


int fibonaci(int n)
{
    if (n <= 2)
    {
        return n;
    }
    else
    {
        return (fibonaci(n-1)+fibonaci(n-2));
    }
}

int main()
{
    int N, f1, f2, i = 3, f;
    printf("Calculo do valor da funcao de Fibonacci:\n");
    printf("Indique N: ");
    scanf("%d", &N);

    f1 = 2;
    f2 = 1;

    // if (N == 1 || N == 2)
    // {
    //     f = N;
    // }
    // else
    // {
    //     while (i <= N)
    //     {
    //         f = f1 + f2;
    //         f2 = f1;
    //         f1 = f;
    //         printf("Fib(%d) = %d\n", i, f);
    //         i++;
    //     }
    // }


    // com recursão
    f = fibonaci(N);

    printf("Resultado: %d", f);

    return 0;
}
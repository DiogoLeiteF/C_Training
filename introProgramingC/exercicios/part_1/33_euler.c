#include <stdio.h>

// Calcular o número de Euler e , através da utilização da série de Taylor para x
// e quando x = 1 (soma do inverso dos factoriais):
// Notas:
// • Considere o factorial de zero como sendo 1
// • Utilize a precisão dupla para valores reais, neste e em outros exercícios
// • Na função printf pode imprimir um número real em notação científica, e especificando a
// precisão a 16 dígitos utilizando a string de formatação: %.16g

int main()
{
    int n, k, i;
    double euler, inv, fact_N;

    printf("Calculo do numero de euler: \n");
    printf("indique K: ");
    scanf("%d", &k);

    n = 0;
    i = 1;

    while (n <= k)
    {
        // calcular factorial N
        if (n == 0)
        {
            fact_N = 1;
        }
        else
        {
            while (i <= n)
            {
                fact_N *= i;
                i++;
            }
        }

        inv = 1 / fact_N;

        // Sumatorio dos inversos 
        euler += inv; 
        // printf("%.16f\n", inv);
        n++;

    }

    printf("Resultado: %.16g", euler);
}

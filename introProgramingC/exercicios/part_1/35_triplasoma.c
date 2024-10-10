#include <stdio.h>

// Dado um inteiro positivo N, escrever todas as decomposições distintas possíveis como soma
// de três inteiros positivos (considerar iguais as triplas com os mesmos valores mas por outra
// ordem). Calcular também o número de somas distintas.
// Notas:
// • Assumir que os números mais altos aparecem sempre primeiro.

int main()
{
    int n, i, count;
    int j = 1;
    int k = 1;

    printf("Escreva um numero para decompor em somas de 3 parcelas.\n");
    printf("Numero: ");
    scanf("%d", &n);

    count = 0;
    i = n;

    while (i > 0)
    {
        // printf("i: %d\n", i);
        while (j <= i)
        {
            // printf("j: %d\n", j);
            while (k <= j)
            {
                // printf("k: %d\n", k);
                if (i + j + k == n)
                {
                    count++;
                    printf("%d + %d + %d = %d\n", i, j, k, i + j + k);
                }
                k++;
            }
            k=1;
            j++;
        }
        j=1;
        k=1;
        i--;
        // getchar();

    }

    printf("Numero de somas: %d", count);

    return 0;
}
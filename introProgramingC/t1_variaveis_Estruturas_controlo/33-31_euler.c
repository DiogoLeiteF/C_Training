#include <stdio.h>

int main()
{
    int k, j;
    double soma=0, fact=0;

    scanf("%d", &k);
    int i = 0;
    while (i <= k)
    {
        if (i == 0)
            fact = 1;
        else
        {
            fact=1;
            j = 1;
            while (j <= i)
            {
                fact *= j;
                j++;
            }
        }
        soma += 1/fact;
        // parciais
        // printf("%d: %lf\n", i, soma);
        i++;
    }

    printf("Resultado: %.16g", soma);

    return 0;
}
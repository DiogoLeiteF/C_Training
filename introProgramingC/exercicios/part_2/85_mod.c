#include <stdio.h>

int mdc(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else 
    {
        return mdc(y, x % y);
    }
}

int main()
{
    int x, y, soma = 0, i, j;

    // printf("Calculo do maximo divisor comum entre dois numeros.\nIndique x e y: ");
    // scanf("%d %d",&x, &y);

    // printf("MDC: %d", mdc(x, y));

    for (i = 1; i < 100; i++)
    {
        for (j = i + 1; j <= 100; j++)
        {
            soma += mdc(i, j);
            // printf("%d\n", soma);
        }
    }


    printf("A soma dos MDC dos pares de numeros de 1 a 100: %d\n", soma);
}
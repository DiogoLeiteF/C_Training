#include <stdio.h>
#include <stdlib.h>

void criar(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = i;
    }
}

void imprimir(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%3d ", arr[i]);
    }
}

void troca(int *i, int *j)
{
    int aux = *i;
    *i = *j;
    *j = aux;
}

void baralhar(int arr[], int len)
{
    printf("\nbaralhar...\n");
    int r;
    int aux;
    for (int i = 0; i < len; i++)
    {
        r = (i + rand() % (len-i));
        // printf("i: %d >> r: %d\n", i, r);
        // if (i > r)
        //     printf("ERRRRROOOOOO");
        troca(&arr[i], &arr[r]);
        // aux = arr[i];
        // arr[i] = arr[r];
        // arr[r] = aux;
    }
}

int main()
{
    srand(1);
    int arr[1000];

    criar(arr, 1000);

    printf("\nVector identidade: ");
    imprimir(arr, 10);

    baralhar(arr, 1000);

    printf("\nVector baralhado: ");
    imprimir(arr, 10);

    printf("\nNa posição 250, 500, 750: %3d %3d %3d", arr[250], arr[500], arr[750]);

    return 0;
}
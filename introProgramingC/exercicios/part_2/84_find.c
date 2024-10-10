#include <stdio.h>
#include <stdlib.h>

void Imprimir(int arr[], int n)
{
    printf("Vetor: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int find(int f, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == f)
            return i;
    }
    return -1;
}

int main()
{
    int n[1000];

    srand(1);

    for (int i = 0; i < 1000; i++)
    {
        n[i] = rand() % 1000;
    }

    Imprimir(n, 10);

    int size = sizeof(n) / sizeof(n[0]);
    
    printf("\nPosição de 2: %d\n", find(2, n, size));

    
}
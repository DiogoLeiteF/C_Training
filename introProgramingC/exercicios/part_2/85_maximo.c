#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

float uniforme()
{
    return ((1 + rand() % 10000) / 10000.0);
}

void imprimir(int n, float arr[])
{
    printf("Vector: ");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }
}

float maximo(float arr[], int len)
{
    float max = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    float arr[1000];
    int len;

    srand(1);
    // srand(time(NULL));


    for (int i = 0; i < 1000; i++)
    {
        arr[i] = -(log(uniforme()));
    }

    imprimir(10, arr);

    len = sizeof(arr)/sizeof(arr[0]);

    printf("\nValor maximo: %.5f", maximo(arr, len));

    // printf("%f", uniforme());
}
#include <stdio.h>
#define SIZE 10

int main()
{
    int matriz1[SIZE][SIZE];
    int matriz2[SIZE][SIZE];
    int matrizSoma[SIZE][SIZE];
    int i, j;

    /* inicializar matrizes */
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
        {
            matriz1[i][j] = i + j;
            matriz2[i][j] = i * j;
        }

    printf("Matriz 1\n");
    for (i=0; i<SIZE;i++){
        printf("\n");
        for (j=0;j<SIZE;j++)
        {
            printf("%3d ", matriz1[i][j]);
        }
    }

        printf("\nMatriz 2\n");
    for (i=0; i<SIZE;i++){
        printf("\n");
        for (j=0;j<SIZE;j++)
        {
            printf("%3d ", matriz2[i][j]);
        }
    }

    

    /* somar matrizes */
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];

    /* mostrar resultado */

    printf("\nSoma da matrizes\n");
    for (i = 0; i < SIZE; i++)
    {
        /* mudar de linha */
        printf("\n");
        for (j = 0; j < SIZE; j++)
            printf("%3d ", matrizSoma[i][j]);
    }

    return 0;
}
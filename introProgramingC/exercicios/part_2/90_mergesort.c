#include <stdio.h>
#include <stdlib.h>

/* mergersort.c */
#define MAXVECTOR 1000000

/* função auxiliar para juntar duas partes do vector ordenadas */
void MergeSort2(int v[], int a, int meio, int b)
{
    /* juntar ambas as metades no vector auxiliar */
    static int aux[MAXVECTOR];
    int i, j, k;
    /* i primeira parte do vector,
    j segunda parte,
    k vector ordenado */
    i = a;
    j = meio;
    k = a;
    /* k avança de a a b */
    while (k < b)
        /* vector auxiliar fica com o menor dos valores, a não
        ser que uma das partes já tenha acabado, e ao mesmo tempo
        incrementa as respectivas variáveis iteradoras */
        if (i < meio && (j >= b || v[i] <= v[j]))
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];

    /* copiar o vector auxiliar para o vector em ordenação */
    for (k = a; k < b; k++)
        v[k] = aux[k];

    /* mostrar indicação que já está ordenado o vector de a a b */
    if (b - a > 100000)
        printf(" Ordenado de %d a %d\n", a, b - 1);
}

/* função auxiliar para ordenar de a até b */
void MergeSort1(int v[], int a, int b)
{
    if (b - a < 2)
        /* um ou zero elementos para ordenar, retornar */
        return;

    /* dividir em dois grupos, ordenar separadamente */
    MergeSort1(v, a, (a + b) / 2);
    MergeSort1(v, (a + b) / 2, b);

    /* juntar os dois grupos ordenados */
    MergeSort2(v, a, (a + b) / 2, b);
}

void MergeSort(int v[], int n)
{
    MergeSort1(v, 0, n);
}

int main()
{
    int i;
    /* keyword static força a que esta variável seja na realidade global, e mantem os valores entre chamadas da função. Neste caso é a função main, que não será chamada segunda vez, mas a keyword static permite que o compilador utilize outra zona de memória que não o stack. */
    static int v[MAXVECTOR];
    srand(1);
    for (i = 0; i < MAXVECTOR; i++)
        v[i] = rand() % 1000;
    MergeSort(v, MAXVECTOR);
    printf("Quantis: %d %d %d\n", v[250000], v[500000], v[750000]);
}
#include <stdio.h>

// Programa 8-5 Exemplo de utilização de variáveis estáticas (“static”)


int Troca(int *x, int *y)
{
    static int trocas = 0;
    int aux = *x;
    *x = *y;
    *y = aux;
    return ++trocas;
}

int main()
{
    int x = 123, y = 321;
    printf("Troca %d: x=%d, y=%d\n", Troca(&x, &y), x, y);
    printf("Troca %d: x=%d, y=%d\n", Troca(&x, &y), x, y);
    printf("Troca %d: x=%d, y=%d\n", Troca(&x, &y), x, y);
}
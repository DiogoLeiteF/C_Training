#include <stdio.h>

// Programa 8-1 Tentativa de implementação de uma função para trocar o valor de duas variáveis


int Troca(int x, int y)
{
    int aux = x;
    x = y;
    y = aux;
}

int main()
{
    int x = 123, y = 321;
    Troca(x, y);
    printf("x: %d\ny: %d", x, y);
}


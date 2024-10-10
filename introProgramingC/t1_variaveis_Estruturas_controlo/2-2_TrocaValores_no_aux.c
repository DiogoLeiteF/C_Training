#include <stdio.h>

int main()
{
    /* declaração de 2 variáveis inteiras */
    int x = 3;
    int y = 7;
    /* trocar o valor de x com y */
    x = x + y;
    y = x - y;
    x = x - y;
    /* mostrar os valores em x e em y */
    printf("x: %d, y: %d", x, y);
}

#include <stdio.h>

int main()
{
    int numero, soma=0;
    printf(" Calculo da soma do quadrado dos digitos de um numero:\n");
    printf("Numero: ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        soma += (numero % 10) * (numero % 10);
        printf("  n=%d; soma=%d\n", numero, soma);
        numero = numero / 10;
    }
    printf("Resultado: %d", soma);

    return 0;
}
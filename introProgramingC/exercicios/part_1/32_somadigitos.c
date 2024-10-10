#include <stdio.h>

// Calcule a soma dos quadrados dos dígitos de um número introduzido pelo utilizador.
// Notas:
// • Pode obter o valor do dígito mais baixo, calculando o resto da divisão por 10.
// • Mostre o resultado parcial, neste e nos restantes exercícios.

int main()
{
    int numero, soma;

    printf("Calculo da soma do quadrado dos digitos de um numero:\n");
    printf("Numero: ");
    scanf("%d", &numero);

    while (numero >= 1)
    {
        soma += (numero % 10) * (numero % 10);
        printf("n = %d; soma = %d\n", numero, soma);
        numero /= 10;
    }

    printf("Resultado: %d", soma);

    return 0;
}
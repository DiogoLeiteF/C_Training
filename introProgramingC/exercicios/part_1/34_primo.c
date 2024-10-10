#include <stdio.h>
#include <math.h>

// Faça um programa que verifica se um determinado número N é um número primo. Um
// número é primo se é divisível apenas por ele próprio e pela unidade. Se não for primo deve
// identificar o menor número pelo qual é divisível.
// Notas:
// • É suficiente testar até à raiz quadrada de N (pode utilizar a função sqrt da biblioteca
// math.h)
// • Em vez de calcular a raiz quadrada de N, pode calcular o quadrado do divisor.

int main()
{
    int n, i = 2, primo = 1;

    printf("Funcao que verifica se um numero N é primo: ");
    printf("\nIndique N: ");
    scanf("%d", &n);

    while (i < sqrt(n))
    {
        if (n % i == 0)
        {
            primo = 0;
            printf("\nNumero divisivel por %d", i);
            break;
        }
        printf("%d\t", i);
        i++;
    }
    if (primo)
        printf("\nNumero primo!");

    return 0;
}
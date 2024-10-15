/*
Enunciado (Problem 1) [Matemática: fácil | Programação: fácil] 
Tendo uma lista de números naturais menores que K=10, os múltiplos de 3 e 5 são 3, 5, 6 e 9. A soma destes múltiplos é 23.
Leia o valor de K e devolva a soma dos múltiplos de 3 e 5 menores que K
*/

#include <stdio.h>

void main()
{
    int K, soma=0, i;
    scanf("%d", &K);

    i = 0;
    while(i < K){
        if(i%3==0 || i%5==0){
            soma +=i;
        }
        i++;
    }
    printf("%d",soma);
}
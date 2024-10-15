/*
Enunciado (Problem 3) [Matemática: difícil | Programação: fácil]
Os fatores primos de 13195 são 5, 7, 13 e 29.
Para um dado número K, qual é o maior fator primo?
Atenção: considerar K como podendo ser um número muito grande.
*/

#include <stdio.h>
#include <math.h>

void main()
{
    long long K, resultado;
    scanf("%lld", &K);

    int j;
    int i = 2;
    while (i < K)
    {
        if (K % i == 0)
        {
            j = 2;
            while(j < i){
                if(i%j == 0)
            }
            resultado = i;
        }
        i++;
    }
    printf("%lld", resultado);
}
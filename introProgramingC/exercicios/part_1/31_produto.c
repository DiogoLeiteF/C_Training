#include <stdio.h>

// Multiplicar os primeiros N números inteiros positivos (factorial de N), sendo N definido pelo 
// utilizador:

int main(){
    int N, total=1, i=1;
    printf("Calculo do produto dos primeiros N numeros");
    printf("\nIndique N: ");
    scanf("%d", &N);

    while(i<= N){
        total *=i;
        printf("Factorial (%d) = %d\n", i, total);
        i++;
    }
    printf("Resultado: %d", total);

    return 0;
}
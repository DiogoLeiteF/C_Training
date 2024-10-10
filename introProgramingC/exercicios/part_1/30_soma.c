#include <stdio.h>

// pag 30
// Somar os primeiros N números inteiros, sendo N definido pelo utilizador: 

int main(){
    int n;
    int total;
    int i = 1;

    printf("Calculo da soma dos primeiros N numeros\n");
    printf("Indique N: ");
    scanf("%d", &n);

    while(i <= n){
        total += i;
        printf("\nadicionar %d, parcial %d", i, total);
        i++;
    }
    printf("\nTotal: %d", total);

    return 0;
}
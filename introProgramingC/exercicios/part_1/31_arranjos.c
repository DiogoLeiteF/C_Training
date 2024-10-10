#include <stdio.h>

// Calculo dos arranjos de N, R a R: multiplicar os números de N-R+1 até N

int main(){

    int n, r, i, arranjos = 1;

    printf("Calculo dos arranjos de N, R a R\n");
    printf("Indique N: ");
    scanf("%d", &n);
    printf("Indique R: ");
    scanf("%d", &r);

    i = n-r+1;

    while(i <= n){
        arranjos *= i;
        printf("i = %d; arranjos = %d\n", i, arranjos);
        i++;
    } 
    printf("Resultado: %d", arranjos);


    return 0;
}
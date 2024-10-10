#include <stdio.h>

int main(){

    int N, R, arranjos;
    printf(" Calculo dos arranjos de N, R a R:\n");
    printf("Indique N: ");
    scanf("%d", &N);
    printf("Indique R: ");
    scanf("%d", &R);

    if(R>=N || R<=0){
        printf("Erro: N tem de ser maior que R e este maior que 0.");
    }else{
        arranjos = 1;
        int i = N-R+1;
        while(i<=N){
            arranjos *= i;
            printf("  i=%d; arranjos=%d\n", i, arranjos);
            i++;
        }
        printf("Resultado: %d", arranjos);
    }

    return 0;
}
#include<stdio.h>
#include <math.h>

int main(){
    int numero;
    scanf("%d", &numero);

    int divisores = 0;
    int i = 2;
    while(i <= sqrt(numero))
    {
        if(numero%i == 0 && divisores == 0){
            // printf("%d  ", i);
            divisores = i;
        }
        i++;
    }
    printf("%d", divisores);

    return 0;
}
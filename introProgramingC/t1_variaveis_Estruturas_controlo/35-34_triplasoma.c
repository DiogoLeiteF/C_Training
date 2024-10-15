#include <stdio.h>


int main(){
    int numero;
    scanf("%d", &numero);

    int total_somas = 0;
    int i = 1;
    int j = i;
    int k = numero;
    while (i <= (numero / 3)){
        j = i;
        while(j < k){
            k = numero-i-j; 
            // printf("%d + %d + %d\n", k, j, i);     
            total_somas += 1;
            j++;
        }
        i++; 
    }
    printf("%d", total_somas);

    return 0;
}
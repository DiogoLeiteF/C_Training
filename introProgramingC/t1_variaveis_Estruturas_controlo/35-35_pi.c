# include <stdio.h>
#include <math.h>

int main(){
    int k = 0;
    scanf("%d", &k);

    double soma = 0;
    double fact_4k;
    double fact_k;
    int indice_somatorio_k = 0;
    while(indice_somatorio_k <= k){
        fact_4k = 1;
        fact_k = 1;
        if(indice_somatorio_k != 0){
            int i = indice_somatorio_k;
            while(i >=1){
                fact_k *= i;
                i--;
            }
            
            i = 4 * indice_somatorio_k;
            while(i >=1){
                fact_4k *= i;
                i--;
            }
        }else {
            fact_4k = 1;
            fact_k = 1;
        }
        printf("fact_k: %fl | fact_4k: %lf | indice_somatorio: %d\n", fact_k, fact_4k, indice_somatorio_k);
        
        soma += (fact_4k * (1103+26390*indice_somatorio_k)) / ( pow(fact_k, 4) * pow(396, (4*indice_somatorio_k)));
        indice_somatorio_k++;
    }
    double pi =1/((2*sqrt(2) / 9801) * soma);  
    printf("%.17g", pi );
    return 0;

}
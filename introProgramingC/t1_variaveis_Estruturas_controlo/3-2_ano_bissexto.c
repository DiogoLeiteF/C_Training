#include <stdio.h>

int main(){
    int ano;

    printf("Indique ano: ");
    scanf("%d", &ano);

    if(ano%4==0 && ano%100!=0 || ano%400 ==0){
        printf("Bissexto");
    }else{
        printf("Normal");
    }
    return 0;
}
# include <stdio.h>

// Faça um programa que leia as horas, minutos e segundos, e calcule o número de segundos que 
// passaram desde o início do dia. 

int main(){
    int horas, minutos, segundos, total=0;

    printf("calculo do numero de segundos desde o inicio do dia");
    printf("\nHora: ");
    scanf("%d", &horas);
    printf("Minutos: ");
    scanf("%d", &minutos);
    printf("Segundos: ");
    scanf("%d", &segundos);

    total += horas * 60 * 60;
    total += minutos * 60;
    total += segundos; 

    printf("Numero de segundos desde o inicio do dia: %d", total);



    return 0;
}
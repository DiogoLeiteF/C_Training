#include <stdio.h>
// pag 29
// Faça um programa que coloque Olá Mundo! em bom português (com acentos), e que indique 
// o tamanho em bytes (operador sizeof) dos seguintes tipos de dados: char; short; int; long; 
// long long; float; double; long double

int main(void){
    printf("Olá Mundo!");

    printf("\nsizeof(char): %d", sizeof(char));
    printf("\nsizeof(short): %d", sizeof(short));
    printf("\nsizeof(int): %d", sizeof(int));
    printf("\nsizeof(long): %d", sizeof(long));
    printf("\nsizeof(long long): %d", sizeof(long long));
    printf("\nsizeof(float): %d", sizeof(float));
    printf("\nsizeof(double): %d", sizeof(double));
    printf("\nsizeof(long double): %d", sizeof(long double));
    return 0;
}
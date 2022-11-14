#include <stdio.h>
#include<string.h>

int main()
{
    // char x = 'X';
    // char y = 'Y';
    // char aux;

    // aux = x;
    // x = y;
    // y = aux;

    // printf("x = %c\n", x);
    // printf("y = %c\n", y);


    char x[] = "water";
    char y[] = "lemonade";
    char aux[15];

    /*if the second variable is shorter than the first an error may appear;
    in that case use string (character array) with same size 
    char x [15], char y[15], char aux[15]*/

    strcpy(aux, x);
    strcpy(x, y);
    strcpy(y, aux);

    printf("x = %s\n", x);
    printf("y = %s\n", y);




    return 0;
}
#include <stdio.h>

void square(int * const number);

int main(int argc, char const *argv[])
{
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);
    
    square(&number);

    printf("the number squared by itself is: %d", number);




    return 0;
}


void square(int * const number){
    *number = *number * *number;
    
}
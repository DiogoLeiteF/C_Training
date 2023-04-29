#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //pseudo random numbers = a set of values or elements that are statistically random
    // (Don't use these for any sort of cryptographic security)


    srand(time(0)); // create a seed for the random function
    
    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("\n%d", number1);
    printf("\n%d", number2);
    printf("\n%d", number3);


    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    printf("This is a gessing game.\nI have chosen a number between 0 and 20 which you must guess.\n");


    srand(time(NULL));   // Initialization, should only be called once.
    int guess = rand() % 21;      // Returns a pseudo-random integer between 0 and RAND_MAX.
    printf("%d", guess);

    int user;

    int check = 0;

    for (int i = 5; i >= 1; i--)
    {
        printf("\nYou have %d tries left.", i);
        printf("\nEnter a guess: ");
        scanf("%d", &user);
        if (user == guess)
        {
            check = 1;
            break;
        }
        else if (user < guess)
        {
            printf("Sorry, %d is wrong. My number is greater than that.", user);
        }
        else
        {
            printf("Sorry, %d is wrong. My number is less than that.", user);
        }
    }

    if (check == 1)
        printf("\nCongratulations. You guessed it!");
    else
        printf("\nNo mor tries.. You lose!");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    int max;
    int rand_number;
    int guess_number;
    int guesses = 0;

    // define min and max valies for the game

    printf("\nWelcome to the number guessing game.");
    printf("\nPlease enter the maximum value for the game: ");
    scanf("%d", &max);

    // uses current time as seed
    srand(time(0));

    // generate a random number between min anda max
    rand_number = (rand() % max) + MIN;

    // printf("\n%d >> Rand number\n", rand_number); // just for testing

    do
    {
        printf("\nEnter your guess:  ");
        scanf("%d", &guess_number);

        if (guess_number > rand_number)
        {
            printf("\nTo high!");
        }
        else if (guess_number < rand_number)
        {
            printf("\nTo low!");
        }
        else
        {
            printf("\ncorrect\n");
        }
        guesses++;

    } while (rand_number != guess_number);

    printf("\n############################");
    printf("\nanswer: %d", rand_number);
    printf("\nguesses: %d", guesses);
    printf("\n############################");

    return 0;
}
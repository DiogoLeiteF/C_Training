#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    const int MIN = 1;
    const int MAX = 100;
    int guesses = 0;
    int guess;
    int answer;

    // use current time to generate a seed fot rand
    srand(time(0));
    answer = (rand() % MAX) + MIN;

    printf("\n%d", answer);


    do
    {
        printf("\nEnter a guess betwen %d and %d: ", MIN, MAX);
        scanf("%d", &guess);
        guesses++;

        if(guess > answer)
        {
            printf("Too high..");
        }
        else if (guess < answer)
        {
            printf("Too low..");
        }
        
    } while (guess != answer);
    
    printf("\nThe number was %d", answer);
    printf("\nyou nedded %d to guess it", guesses);
    

    


    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char questions[][100] = {
        "1. What year did the C languade debut?: ", 
        "2. Who is credited with creating C?: ",
        "3. What is the predecessor of C?: "
        };

    char options[][100] = {
        "A. 1969", "B. 1972", "C. 1975", "D. 1999",
        "A. Dennis Ritchie", "B. Nikola Telsa", "C. John Carmack", "D. Doc B",
        "A. Objective C", "B. B", "C. C++", "D. C#"  
    };

    char answers[3] = {'B', 'A', 'B'};

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("\n***************************\n");
        printf("%s\n", questions[i]);

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("\n%s", options[j]);
        }
        printf("\nGuess: ");
        scanf(" %c", &guess);  // Notice the space before %c

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("\nCorrect\n");
            score++;
        }
        else
        {
            printf("\nWrong!!\n");
        }
    }

    printf("\nFINAL SCORE: %d out of %d", score, numberOfQuestions);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = repeats a dsection of code until a confitions is meet
    //  a while loop migght not execute at all

    char name[25];

    printf("\nWhat's your name? ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\nYou did not enter your name");
        printf("\nWhat's your name? ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("\nHello %s", name);

    return 0;
}
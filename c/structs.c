#include <stdio.h>
#include <string.h>


struct Player
{
    char name[12];
    int score;
};

int main(int argc, char const *argv[])
{

    
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "John");
    player1.score = 15;
    
    strcpy(player2.name, "Tesla");
    player2.score = 10;


    printf("\nPlayer 1 name: %s", player1.name);
    printf("\nPlayer 1 score: %d", player1.score);

    printf("\nPlayer 2 name: %s", player2.name);
    printf("\nPlayer 2 score: %d", player2.score);


    return 0;
}


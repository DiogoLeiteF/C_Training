#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    // struct = colection of related members ("variables")
    //          they can be of different data types
    //          listed under one name in block of memory
    //          VERY SIMILAR to classes in other languages (but no methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Diogo");
    player1.score = 4;

    strcpy(player2.name, "Leite");
    player2.score = 5;

    printf("\n%s", player1.name);
    printf("\n%d", player1.score);

    printf("\n%s", player2.name);
    printf("\n%d", player2.score);

    return 0;
}
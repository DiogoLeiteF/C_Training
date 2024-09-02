#include <stdio.h>
#include <string.h>


int checkWin(char table[][3])
{
    int win = 0;

    if(
        table[0][0] == table[0][1] && table[0][1] == table[0][2] ||
        table[1][0] == table[1][1] && table[1][1] == table[1][2] ||
        table[2][0] == table[2][1] && table[2][1] == table[2][2] ||
        table[0][0] == table[1][0] && table[1][0] == table[2][0] ||
        table[0][1] == table[1][1] && table[1][1] == table[2][1] ||
        table[0][2] == table[1][2] && table[1][2] == table[2][2] ||
        table[0][0] == table[1][1] && table[1][1] == table[2][2] ||
        table[0][2] == table[1][1] && table[1][1] == table[2][0]
        )
        {
            win = 1;
        }
    return win;
}

void printTable(char table[][3])
{
    printf("\n %c | %c | %c ", table[0][0], table[0][1], table[0][2]);
    printf("\n___|___|___ ");
    printf("\n %c | %c | %c ", table[1][0], table[1][1], table[1][2]);
    printf("\n___|___|___ ");
    printf("\n \%c | %c | %c ", table[2][0], table[2][1], table[2][2]);
}

void fillTable(char table[][3], char choice, char player)
{
    char mark;
    if(player == 'A')
    {
        mark = 'X';
    } 
    else
    {
        mark = 'O';
    };

    switch (choice)
    {
    case '1':
        table[0][0] =  mark;
        break;
    case '2':
        table[0][1] = mark;
        break;
    case '3':
        table[0][2] = mark;
        break;
    case '4':
        table[1][0] = mark;
        break;
    case '5':
        table[1][1] = mark;
        break;
    case '6':
        table[1][2] = mark;
        break;
    case '7':
        table[2][0] = mark;
        break;
    case '8':
        table[2][1] = mark;
        break;
    case '9':
        table[2][2] = mark;
        break;
    
    default:
        break;
    }
}

int main(int argc, char const *argv[])
{
    
    char table[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
    };

    char choice;
    char player = 'A';
    int win = 0;


    while (win == 0)
    {
        printTable(table);

        printf("\nChose your move: ");
        scanf(" %c", &choice);

        fillTable(table, choice, player);
        win = checkWin(table);
        if(win == 1)
        {
            break;
        }
        if(player == 'A')
        {
            player = 'B';
        }
        else
        {
            player= 'A';
        }
    }
    
    printTable(table);
    printf("\nplayer %c WIN", player);

    return 0;
}

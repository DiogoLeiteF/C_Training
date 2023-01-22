#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

int checkForWin(char board[]);
void drawboard(char board[]);
void markBoard(int move, int player, char board[]);
int playerMove(char board[], int player);

int main()
{

    char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int player = 2;
    int game = 1;
    int move;
    int gameCount = 1;

    while (game == 1)
    {
        (player == 1) ? (player = 2) : (player = 1);

        drawboard(board);
        move = playerMove(board, player);
        markBoard(move, player, board);
        drawboard(board);
        game = checkForWin(board);
        gameCount++;

        if (gameCount > 9)
        {
            break;
        }

        // printf("%d", game);
    }
    if (gameCount > 9)
    {
        printf("\nIts a tie\n");
    }
    else
    {
        printf("\nPlayer %d Wins!!!\n", player);
    }

    return 0;
}

int checkForWin(char board[])
{
    /*check all possible combinations for win
    return 0 if win combination was found
    return 1 otherwise */
    if (board[1] == board[2] && board[2] == board[3] || board[4] == board[5] && board[5] == board[6] || board[7] == board[8] && board[8] == board[9] || board[1] == board[4] && board[4] == board[7] || board[2] == board[5] && board[5] == board[8] || board[3] == board[6] && board[6] == board[9] || board[1] == board[5] && board[5] == board[9] || board[3] == board[5] && board[5] == board[7])
    {
        // printf("check 0");
        return 0;
    }
    else
    {
        // printf("check 1");
        return 1;
    }
}

void drawboard(char board[])
{
    /*print the board to the console*/

    system("clear"); // clears the console every time
    printf("\n\nTic Tac Toe\n\n");
    printf("Player 1 (X) || Player 2 (O)\n");

    printf("\n   |   |   \n");
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[7], board[8], board[9]);
    printf("   |   |   \n");

    return;
}

void markBoard(int move, int player, char board[])
{
    /*mark the boad with 'X' for player 1 or 'O' for player 2*/

    (player == 1) ? (board[move] = 'X') : (board[move] = 'O');
}

int playerMove(char board[], int player)
{
    /*Ask for player move and check if it is valid
    return the move*/

    int move;
    printf("\nPlayer %d, enter a number: ");
    scanf("%d", &move);

    if (move > 9 || move < 1)
    {
        printf("Wrong input, try again...\n");
        move = playerMove(board, player);
    }
    else if (board[move] == 'X' || board[move] == 'O')
    {
        printf("Already chosen, try again...\n");
        move = playerMove(board, player);
    }

    return move;
}

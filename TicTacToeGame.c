#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

int checkForWin();
void displayBoard();
void markBoard(char mark);
void getPlayerName();

int main()
{
    int gameStatus;
    char mark;
    char playerName1[10] = "\0";
    char playerName2[10] = "\0";

    printf("We need two players, first player, ");
    getPlayerName(playerName1);

    printf("\nSecond player, ");
    getPlayerName(playerName2);

    player = 1;

    do
    {
        displayBoard(playerName1, playerName2);

        // change turns
        player = (player % 2) ? 1 : 2;

        bool valid = 0;
        while (!valid)
        {
            // get input
            choice = 0;
            //        	fflush(stdout);
            setbuf(stdin, NULL);
            setbuf(stdout, NULL);
            printf("%s, please choose your number: ", player == 1 ? playerName1 : playerName2);
            scanf("%d", &choice);
            if (choice)
            {
                valid = choice; //true
            }
            else
            {
                printf("Invalid input stupid.\n");
            }
        }

        // set the correct character based on player turn
        mark = (player == 1) ? 'x' : 'o';

        // set board based on user choice or invalid choice
        markBoard(mark);

        gameStatus = checkForWin();

        player++;

    } while (gameStatus == -1);

    if (gameStatus == 1)
        printf("==>\aPlayer %d Won! \n\n", --player);
    else
        printf("==>\aGame Draw");

    return 0;
}

/*****************************************
FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS N PROGRESS
O GAME IS OVER AND NO RESULT
*****************************************/

int checkForWin()
{
    int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;

    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;

    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;

    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;

    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;

    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;

    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')
        returnValue = 0;

    else
        returnValue = -1;

    return returnValue;
}

// FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
void displayBoard(const char *playerName1, const char *playerName2)
{
    //    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("%s (x) - %s (o)\n\n\n", playerName1, playerName2);

    printf("    |    |   \n");
    printf(" %c  | %c  | %c  \n", square[1], square[2], square[3]);

    printf("____|____|____\n");
    printf("    |    |    \n");

    printf(" %c  | %c  | %c  \n", square[4], square[5], square[6]);

    printf("____|____|____\n");
    printf("    |    |    \n");

    printf(" %c  | %c  | %c  \n", square[7], square[8], square[9]);

    printf("    |    |    \n\n");
}

/*******************************
set the board with the correct character,
x or o in the correct spot in the array
*******************************/
void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;

    else if (choice == 2 && square[2] == '2')
        square[2] = mark;

    else if (choice == 3 && square[3] == '3')
        square[3] = mark;

    else if (choice == 4 && square[4] == '4')
        square[4] = mark;

    else if (choice == 5 && square[5] == '5')
        square[5] = mark;

    else if (choice == 6 && square[6] == '6')
        square[6] = mark;

    else if (choice == 7 && square[7] == '7')
        square[7] = mark;

    else if (choice == 8 && square[8] == '8')
        square[8] = mark;

    else if (choice == 9 && square[9] == '9')
        square[9] = mark;

    else
    {
        printf("Invalid Move ");

        player--;
        // getch();
    }
}

/**
 * Get user input for name
 */
void getPlayerName(char *playerName)
{
    printf("please enter your name: ");
    scanf("%s", playerName);
}

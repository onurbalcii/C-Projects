#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLUMNS 3

char board[ROWS][COLUMNS];
void initBoard();
void printBoard();
bool gecerlihareket(int sira, int sutun);
void hareket(int sira, int sutun, char Sembol);
bool kazanma(char Sembol);
bool beraber();
int main()
{
    srand(time(0));

    initBoard();

    bool oyun1sira = true;
    char oyun1sembol = 'X';
    char oyun2Sembol = 'O';

    while (true)
    {

        printBoard();


        int sira, sutun;
        if (oyun1sira)
        {
            printf("Player 1's turn (%c). Enter sira and sutun: ", oyun1sembol);
            scanf("%d %d", &sira, &sutun);
        }
        else
        {
            printf("Player 2's turn (%c).\n", oyun2Sembol);


            do
            {
                sira = rand() % ROWS;
                sutun = rand() % COLUMNS;
            } while (!gecerlihareket(sira, sutun));

            printf("Computer's move: %d %d\n", sira, sutun);
        }


        if (gecerlihareket(sira, sutun))
        {
            hareket(sira, sutun, oyun1sira ? oyun1sembol : oyun2Sembol);
            oyun1sira = !oyun1sira;
        }
        else
        {
            printf("Invalid move!\n");
        }


        if (kazanma(oyun1sembol))
        {
            printBoard();
            printf("Player 1 has won!\n");
            break;
        }
        else if (kazanma(oyun2Sembol))
        {
            printBoard();
            printf("Player 2 has won!\n");
            break;
        }
        else if (beraber())
        {
            printBoard();
            printf("The game is a draw!\n");
            break;
        }
    }

    return 0;
}




void initBoard()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            board[i][j] = ' ';
        }
    }
}




void printBoard()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("%c ", board[i][j]);
            if (j < COLUMNS - 1)
            {
                printf("| ");
            }
        }
        printf("\n");
        if (i < ROWS - 1)
        {
            printf("---------\n");
        }
    }
    printf("\n");
}




bool gecerlihareket(int sira, int sutun)
{


    return board[sira][sutun] == ' ';
}


void hareket(int sira, int sutun, char Sembol)
{

     board[sira][sutun] = Sembol;
}



bool kazanma(char Sembol)
{

     for (int i = 0; i < ROWS; i++)
    {
        if (board[i][0] == Sembol && board[i][1] == Sembol && board[i][2] == Sembol)
          {
            return true;
        }
    }


    for (int j = 0; j < COLUMNS; j++)
    {
        if (board[0][j] == Sembol && board[1][j] == Sembol && board[2][j] == Sembol)
        {
            return true;
        }
    }


    if (board[0][0] == Sembol && board[1][1] == Sembol && board[2][2] == Sembol)
    {
        return true;
    }
    if (board[0][2] == Sembol && board[1][1] == Sembol && board[2][0] == Sembol)
    {
        return true;
    }

    return false;
}


bool beraber()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;  }

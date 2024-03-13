#include <stdio.h>

int checkForWin(char data[]);
//
void markBoard(char data[], int input, int* winner);

void drawField(char gamedata[], int input, int winner);

int main(int argc, char** argv)
{
    char data[] = { '1', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    drawField(data, 0, 0);
    int userInput;
    int winner = 0;

    while(checkForWin(data)) {
        scanf("%d", &userInput);
        drawField(data, userInput, 0);
        markBoard(data, userInput, &winner);
        drawField(data, userInput, 0);
    }

    drawField(data, 0, winner);
    return 0;
}
int checkForWin(char data[])
{
    int result = 0;
    if(data[0] == '1' || data[0] == '2')
        result = 1;
    return result;
};
//
void markBoard(char data[], int input, int* winner)
{
    if(data[0] == '1')
        data[input] = 'X';
    if(data[0] == '2')
        data[input] = 'O';
 
    // Проверяем победил ли пользователь
    if((data[1] == 'X' && data[2] == 'X' && data[3] == 'X') || (data[4] == 'X' && data[5] == 'X' && data[6] == 'X') ||
       (data[7] == 'X' && data[8] == 'X' && data[9] == 'X') || (data[1] == 'X' && data[4] == 'X' && data[7] == 'X') ||
       (data[2] == 'X' && data[5] == 'X' && data[8] == 'X') || (data[3] == 'X' && data[6] == 'X' && data[9] == 'X') ||
       (data[1] == 'X' && data[5] == 'X' && data[9] == 'X') || (data[3] == 'X' && data[5] == 'X' && data[7] == 'X')) {
        *winner = data[0]-'0';
        data[0] = 'W';
    } else if((data[1] == 'O' && data[2] == 'O' && data[3] == 'O') ||
              (data[4] == 'O' && data[5] == 'O' && data[6] == 'O') ||
              (data[7] == 'O' && data[8] == 'O' && data[9] == 'O') ||
              (data[1] == 'O' && data[4] == 'O' && data[7] == 'O') ||
              (data[2] == 'O' && data[5] == 'O' && data[8] == 'O') ||
              (data[3] == 'O' && data[6] == 'O' && data[9] == 'O') ||
              (data[1] == 'O' && data[5] == 'O' && data[9] == 'O') ||
              (data[3] == 'O' && data[5] == 'O' && data[7] == 'O')) {
        *winner = data[0]-'0';
        data[0] = 'W';
    } else if(data[1] != '1' && data[2] != '2' && data[3] != '3' && data[4] != '4' && data[5] != '5' &&
              data[6] != '6' && data[7] != '7' && data[8] != '8' && data[9] != '9') {
        data[0] = 'D';
    };
       // Переход хода
    if(data[0] == '1')
        data[0] = '2';
    else if (data[0] == '2')
        data[0] = '1';
    return;
}

void drawField(char gamedata[], int input, int winner)
{
    printf("\e[1;1H\e[2J");
    printf("\n\n  Tic tac toe game");
    printf("\n\n Player 1 goes with: X \tPlayer 2 goes with : O\n\n");
    printf("\t     |     |\n");
    printf("\t  %c  |  %c  |  %c\n", gamedata[1], gamedata[2], gamedata[3]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |\n");
    printf("\t  %c  |  %c  |  %c\n", gamedata[4], gamedata[5], gamedata[6]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |\n");
    printf("\t  %c  |  %c  |  %c\n", gamedata[7], gamedata[8], gamedata[9]);
    printf("\t     |     |");
    if(!input) {
        if(gamedata[0] == 'W') {
            printf("\n\n  Player %d is the winner, congratulate!!!\n\n\n", winner);
        } else if(gamedata[0] == 'D') {
            printf("\n\n  It is draw, good game!!! \n\n\n");
        } else {
            printf("\n\n  Player %c is turn, Your choise: ", gamedata[0]);
        }
    } else {
        printf("\n\n  Player %c is turn, Your choise: ", gamedata[0]);
    }
    return;
};
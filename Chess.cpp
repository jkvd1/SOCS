#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOARD_SIZE 8

char board[BOARD_SIZE][BOARD_SIZE];

void initBoard() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';
        }
    }

    // Set up the starting pieces on the board
    board[0][0] = 'R';
    board[0][1] = 'N';
    board[0][2] = 'B';
    board[0][3] = 'Q';
    board[0][4] = 'K';
    board[0][5] = 'B';
    board[0][6] = 'N';
    board[0][7] = 'R';
    for (int i = 0; i < BOARD_SIZE; i++) {
        board[1][i] = 'P';
        board[6][i] = 'p';
        board[7][i] = 'r';
    }
    board[7][1] = 'n';
    board[7][2] = 'b';
    board[7][3] = 'q';
    board[7][4] = 'k';
    board[7][5] = 'b';
    board[7][6] = 'n';
    board[7][7] = 'r';
}

void displayBoard() {
    printf("\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf(" %d ", BOARD_SIZE - i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf(" %c |", board[i][j]);
        }
        printf("\n");
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("---");
        }
        printf("\n");
    }
    printf("   ");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf(" %c  ", 'a' + i);
    }
    printf("\n\n");
}

int main() {
    initBoard();
    displayBoard();
    return 0;
}


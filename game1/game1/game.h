#define ROW 9
#define COL 9


#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void InitBoard(char board[ROWS][COLS], char rows, char cols,char set);
void DisplayBoard(char board[ROWS][COLS], char row, char col);
void SetMine(char board[ROWS][COLS],char row,char col);
void FindBoard(char mine[ROWS][COLS],char show[ROWS][COLS], char row, char col);
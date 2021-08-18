#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void  InitBoard(char board[ROW][COL], int row, int col);
void  DisplayBoard(char board[ROW][COL], int row, int col);
void  PlaysMove(char board[ROW][COL], int row, int col);
void  ComputerMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);
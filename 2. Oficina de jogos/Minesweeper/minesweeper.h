#ifndef MINESWEEPER_H
#define MINESWEEPER_H

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define CLEAR_SCREEN() printf("\033[2J\033[H\033[3J")

typedef struct {
	int is_mine;
	int neighbours;
	int is_revealed;
	int is_flagged;

} Cell;

// minesweeper.c
void start_board(Cell board[9][9]);
void game_over(Cell board[9][9], int x, int y);
void print_board(Cell board[9][9], int flags, int tempo);
int get_command(Cell board[9][9], int *flags, int *revealed);
void print_board_win(Cell board[9][9], int tempo);

#endif
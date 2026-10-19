#include "minesweeper.h"

void get_neighbours(Cell board[9][9], int j, int i)
{
	int y;
	int x;
	int index_j;
	int index_i;


	y = -1;

	while (y <= 1)
	{
		x = -1;
		while (x <= 1)
		{
			index_j = j + y;
			index_i = i + x;
			if ((index_j >= 0 && index_j <= 8) && (index_i >= 0 && index_i <= 8) && !(y == 0 && x ==0))
				if (board[index_j][index_i].is_mine == 1)
					board[j][i].neighbours++;
			x++;
		}
		y++;
	}

}

void reveal_neighbours(Cell board[9][9], int j, int i, int *revealed)
{
	int y;
	int x;
	int index_j;
	int index_i;

	board[j][i].is_revealed = 1;
	(*revealed)++;

	if (board[j][i].neighbours > 0)
		return;

	y = -1;

	while (y <= 1)
	{
		x = -1;
		while (x <= 1)
		{
			index_j = j + y;
			index_i = i + x;
			if ((index_j >= 0 && index_j <= 8) && (index_i >= 0 && index_i <= 8) && !(y == 0 && x ==0))
				if (board[index_j][index_i].is_mine == 0 && board[index_j][index_i].is_revealed == 0)
					reveal_neighbours(board, index_j, index_i, revealed);
			x++;
		}
		y++;
	}

}

void start_board(Cell board[9][9])
{
	int i;
	int j;
	int bombs;
	j = 0;

	while (j < 9)
	{
		i = 0;
		while (i < 9)
		{
			board[j][i].is_mine = 0;
			board[j][i].neighbours = 0;
			board[j][i].is_revealed = 0;
			board[j][i].is_flagged = 0;
			i++;
		}
		j++;
	}

	bombs = 0;

	while (bombs < 10)
	{
		i = rand() % 9;
		j = rand() % 9;

		if (!board[j][i].is_mine)
		{
			board[j][i].is_mine = 1;
			bombs++;
		}
	}

	j = 0;

	while (j < 9)
	{
		i = 0;
		while (i < 9)
		{
			if (board[j][i].is_mine == 0)
				get_neighbours(board, j, i);
			i++;
		}
		j++;
	}

}

void game_over(Cell board[9][9], int x, int y)
{
	int j;
	int i;

	j = 0;

	CLEAR_SCREEN();

	printf("====================================\n");
	printf("            GAME OVER             \n");
	printf("====================================\n");
	printf(" You hit a mine!\n");
	printf("====================================\n");
	printf("\n");
	printf("    0    1    2    3    4    5    6    7    8  \n");
	printf("  ┌────┬────┬────┬────┬────┬────┬────┬────┬────┐\n");
	while (j < 9)
	{
		i = 0;
		printf("%d │", j);
		while (i < 9)
		{
			if (j == x && i == y)
				printf(" 💥 │");
			else if (board[j][i].is_flagged == 1 && board[j][i].is_mine == 1)
				printf(" 🚩 │");
			else if (board[j][i].is_flagged == 1 && board[j][i].is_mine == 0)
				printf(" ❌ │");
			else if (board[j][i].is_mine == 1)
				printf(" 💣 │");
			else if (board[j][i].is_revealed == 1)
				printf("    │");
			else
				printf(" ■  │");
			i++;
		}
		printf("\n");
		j++;
		if (j < 9)
			printf("  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤\n");
	}
	printf("  └────┴────┴────┴────┴────┴────┴────┴────┴────┘");
	printf("\n");
}

void print_board(Cell board[9][9], int flags, int tempo)
{
	int i;
	int j;

	j = 0;

	printf("====================================\n");
	printf("            MINESWEEPER             \n");
	printf("====================================\n");
	printf(" Mines: 10  |  Flags: %d  |  Time: %d\n", flags, tempo);
	printf("====================================\n");
	printf("\n");
	printf("    0    1    2    3    4    5    6    7    8  \n");
	printf("  ┌────┬────┬────┬────┬────┬────┬────┬────┬────┐\n");
	while (j < 9)
	{
		i = 0;
		printf("%d │", j);
		while (i < 9)
		{
			if (board[j][i].is_flagged == 1)
				printf(" 🚩 │");
			else if (board[j][i].is_revealed == 1)
			{
				if (board[j][i].neighbours == 0)
					printf("    │");
				else
					printf("  %d │", board[j][i].neighbours);
			}
			else
				printf(" ■  │");
			i++;
		}
		printf("\n");
		j++;
		if (j < 9)
			printf("  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤\n");
	}
	printf("  └────┴────┴────┴────┴────┴────┴────┴────┴────┘");
	printf("\n");
}

int get_command(Cell board[9][9], int *flags, int *revealed)
{
	int j;
	int i;
	char command;

	printf("[Commands]: R X Y (Reveal) | F X Y (Flag)\n");
	printf("Enter command:");
	scanf(" %c %d %d", &command, &j, &i);

	if (command == 'F' || command == 'f')
	{
		if (board[j][i].is_flagged == 1)
		{
			board[j][i].is_flagged = 0;
			(*flags)--;
		}
		else
		{
			board[j][i].is_flagged = 1;
			(*flags)++;
		}
	}
	else if (command == 'R' || command == 'r')
	{
		if (board[j][i].is_mine == 0)
			reveal_neighbours(board, j, i, revealed);
		else
		{
			game_over(board, j, i);
			return (1);
		}
	}

	return (0);
}

void print_board_bombs(Cell board[9][9])
{
	int i;
	int j;

	j = 0;
	printf("\n");
	while (j < 9)
	{
		i = 0;
		while (i < 9)
		{
			printf("%d ", board[j][i].is_mine);
			i++;
		}
		printf("\n");
		j++;
	}
	printf("\n");
}

void print_board_neighbours(Cell board[9][9])
{
	int i;
	int j;

	j = 0;
	printf("\n");
	while (j < 9)
	{
		i = 0;
		while (i < 9)
		{
			if (board[j][i].is_mine != 1)
				printf("%d ", board[j][i].neighbours);
			else
				printf("X ");
			i++;
		}
		printf("\n");
		j++;
	}
	printf("\n");
}

void print_board_win(Cell board[9][9], int tempo)
{
	int i;
	int j;

	j = 0;

	printf("====================================\n");
	printf("          CONGRATULATIONS!          \n");
	printf("====================================\n");
	printf(" Cleared in %ds!\n", tempo);
	printf("====================================\n");
	printf("\n");
	printf("    0    1    2    3    4    5    6    7    8  \n");
	printf("  ┌────┬────┬────┬────┬────┬────┬────┬────┬────┐\n");
	while (j < 9)
	{
		i = 0;
		printf("%d │", j);
		while (i < 9)
		{
			if (board[j][i].is_mine == 1)
				printf(" 🚩 │");
			else if (board[j][i].is_revealed == 1)
			{
				if (board[j][i].neighbours == 0)
					printf("    │");
				else
					printf("  %d │", board[j][i].neighbours);
			}
			else
				printf(" ■  │");
			i++;
		}
		printf("\n");
		j++;
		if (j < 9)
			printf("  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤\n");
	}
	printf("  └────┴────┴────┴────┴────┴────┴────┴────┴────┘");
	printf("\n");
}

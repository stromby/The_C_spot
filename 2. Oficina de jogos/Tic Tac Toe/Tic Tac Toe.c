#include <stdio.h>
#include <locale.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define CLEAR_SCREEN() printf("\033[2J\033[H\033[3J")
#define CLEAN_BUFFER() { int c_garbage; while ((c_garbage = getchar()) != '\n' && c_garbage != EOF); }

const char* trans_char(char cell)
{
	if (cell == 'X') return "❌";
    if (cell == 'O') return "⭕";

    if (cell == '1') return "1 ";
    if (cell == '2') return "2 ";
    if (cell == '3') return "3 ";
    if (cell == '4') return "4 ";
    if (cell == '5') return "5 ";
    if (cell == '6') return "6 ";
    if (cell == '7') return "7 ";
    if (cell == '8') return "8 ";
    if (cell == '9') return "9 ";

	return("  ");
}

char is_valid(char board[10], char c)
{

	while (c < '1' || c > '9' || (board[c - '0'] == 'X' || board[c - '0'] == 'O'))
	{
		if (c < '1' || c > '9')
			printf("\n❌ Invalid input! Please enter a single DIGIT between 1 and 9.\n");
		else if (board[c - '0'] == 'X' || board[c - '0'] == 'O')
			printf("\n❌ Invalid input! Position already taken.\n");
        printf("👉 Try again: ");
    	scanf(" %c", &c);

		CLEAN_BUFFER();
	}

	return (c);
}

void print_board(int player, char board[10])
{
	char move;

	printf("\n");
	printf("┌─────────────────────────────────────────┐\n");
	printf("│             ❌  JOGO DO GALO  ⭕        │\n");
	printf("└─────────────────────────────────────────┘\n");
	printf("\n");
	printf("             ┌────┬────┬────┐\n");
	printf("             │ %s │ %s │ %s │\n", trans_char(board[1]), trans_char(board[2]), trans_char(board[3]));
	printf("             ├────┼────┼────┤\n");
	printf("             │ %s │ %s │ %s │\n", trans_char(board[4]), trans_char(board[5]), trans_char(board[6]));
	printf("             ├────┼────┼────┤\n");
	printf("             │ %s │ %s │ %s │\n", trans_char(board[7]), trans_char(board[8]), trans_char(board[9]));
	printf("             └────┴────┴────┘\n");
	printf("\n");

	if (player == 0)
		printf("	👉 Turn: Player 1 (⭕)\n");
	if (player == 1)
		printf("	👉 Turn: Player 2 (❌)\n");
	printf("───────────────────────────────────────────\n");
	printf("Select a position (1-9):");
	scanf(" %c", &move);

	CLEAN_BUFFER();

	move = is_valid(board, move);

	if (player == 0)
		board[move - '0'] = 'O';
	if (player == 1)
		board[move - '0'] = 'X';
}

int check_game_over(int player, char board[10])
{
	int i = 1;

	if ((board[1] == board[2] && board[2] == board[3])
		|| (board[4] == board[5] && board[5] == board[6])
		|| (board[7] == board[8] && board[8] == board[9])
		|| (board[1] == board[4] && board[4] == board[7])
		|| (board[2] == board[5] && board[5] == board[8])
		|| (board[3] == board[6] && board[6] == board[9])
		|| (board[1] == board[5] && board[5] == board[9])
		|| (board[3] == board[5] && board[5] == board[7]))
	{
		CLEAR_SCREEN();
		printf("┌─────────────────────────────────────────┐\n");
		printf("│      🎉  CONGRATULATIONS! WINNER! 🎉    │\n");
		printf("├─────────────────────────────────────────┤\n");
		if (player == 0)
			printf("│  🏆 Player 1 (⭕) dominated the board!  │\n");
		else if (player == 1)
			printf("│  🏆 Player 2 (❌) dominated the board!  │\n");
		printf("│  ✨ Spectacular victory!                │\n");
		printf("└─────────────────────────────────────────┘\n");

		return (1);
	}



	while (i < 10)
	{
		if (board[i] == i + '0')
			return (0);
		i++;
	}

	CLEAR_SCREEN();

	printf("┌─────────────────────────────────────────┐\n");
	printf("│             🤝  IT'S A DRAW! 🤝         │\n");
	printf("├─────────────────────────────────────────┤\n");
	printf("│  🧩 The board is full, no moves left.   │\n");
	printf("│  ⚔️  A perfect tactical balance!         │\n");
	printf("└─────────────────────────────────────────┘\n");
	printf("\n");

	return (1);
}


int main(void)
{
	 #ifdef _WIN32
        SetConsoleOutputCP(65001);
    #else
        setlocale(LC_ALL, "");
    #endif

	int player = 0;
	int game_over = 0;

	char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	while (game_over == 0)
	{
		CLEAR_SCREEN();
		print_board(player, board);
		game_over = check_game_over(player, board);
		player = !player;
	}

	return (0);
}
#include "minesweeper.h"

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(65001);
    #else
        setlocale(LC_ALL, "");
    #endif

	srand(time(NULL));

	Cell board[9][9];
	int game_over;
	int flags;
	int revealed;
	time_t tempo_inicio, tempo_atual;
    int segundos_decorridos;

	flags = 0;
	revealed = 0;
	game_over = 0;

	time(&tempo_inicio);
	start_board(board);

	while (game_over != 1 && revealed != 71)
	{
	CLEAR_SCREEN();
	time(&tempo_atual);
	segundos_decorridos = (int)difftime(tempo_atual, tempo_inicio);
	print_board(board, flags, segundos_decorridos);
	game_over = get_command(board, &flags, &revealed);
	}

	if (revealed == 71)
	{
		time(&tempo_atual);
		segundos_decorridos = (int)difftime(tempo_atual, tempo_inicio);
		CLEAR_SCREEN();
		print_board_win(board, segundos_decorridos);
	}

	return (0);
}
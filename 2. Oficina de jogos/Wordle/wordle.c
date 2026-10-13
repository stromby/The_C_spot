#include "wordle.h"

char *choose_language(void)
{
	int		opcao;
	char	*ficheiro_idioma;

	CLEAR_SCREEN();

	printf("=== 🌐 SELECT YOUR LANGUAGE ===\n");
	printf("[1] English\n");
	printf("[2] Portuguese\n");
	printf("👉 Choice: ");
	scanf("%d", &opcao);

	if (opcao == 1)
		ficheiro_idioma = "words_en.txt";
	else if (opcao == 2)
		ficheiro_idioma = "words_pt.txt";
	else
	{
		printf("Invalid choice! Defaulting to English.\n");
		ficheiro_idioma = "words_en.txt";
	}

	return (ficheiro_idioma);
}

char	*get_random_word_from_file(char *filename)
{
	int		fd;
	char	*linha;
	char	*dicionario[1000];
	char	*palavra_escolhida;
	int		total_palavras;
	int		random_index;
	int 	i;
	int 	len;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);

	total_palavras = 0;

	while ((linha = get_next_line(fd)) != NULL && total_palavras < 1000)
	{
		len = ft_strlen(linha);
		if (len > 0 && linha[len - 1] == '\n')
			linha[len - 1] = '\0';
		dicionario[total_palavras] = linha;
		total_palavras++;
	}
	close(fd);

	if (total_palavras == 0)
		return (NULL);

	srand(time(NULL));
	random_index = rand() % total_palavras;

	palavra_escolhida = ft_strdup(dicionario[random_index]);

	i = 0;
	while (palavra_escolhida[i])
	{
		if (palavra_escolhida[i] >= 'a' && palavra_escolhida[i] <= 'z')
			palavra_escolhida[i] = palavra_escolhida[i] - 32;
		i++;
	}

	i = 0;
	while (i < total_palavras)
	{
		free(dicionario[i]);
		i++;
	}

	return (palavra_escolhida);
}

void zero_grid(char grid_guesses[6][6], int grid_status[6][5])
{
	int i;
	int j;

	i = 0;

	while (i < 6)
	{
		j = 0;
		while (j < 5)
		{
			grid_guesses[i][j] = '\0';
			grid_status[i][j] = 0;
			j++;
		}
		grid_guesses[i][j] = '\0';
		i++;
	}
}

void print_grid(char grid_guesses[6][6], int grid_status[6][5])
{
	int i;
	int j;

	CLEAR_SCREEN();
	printf("========== 🟩 WORDLE 🟨 ==========\n");
	printf("\n");
	printf("==================================\n");
	printf("\n");

	i = 0;

	while (i < 6)
	{
		j = 0;
		printf("      ");
		while (j < 5)
		{
			if (grid_guesses[i][j] == '\0' && grid_status[i][j] == 0)
				printf(" _ ");
			else if (grid_guesses[i][j] != '\0' && grid_status[i][j] == 1)
				printf(GREEN_BG " %c " RESET, grid_guesses[i][j]);
			else if (grid_guesses[i][j] != '\0' && grid_status[i][j] == 2)
				printf(YELLOW_BG " %c " RESET, grid_guesses[i][j]);
			else if (grid_guesses[i][j] != '\0' && grid_status[i][j] == 3)
				printf(GREY_BG " %c " RESET, grid_guesses[i][j]);
			printf("  ");
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
	printf("==================================\n");

	printf("💡 Legend:\n");
	printf("   " GREEN_BG "   " RESET " Correct position\n");
	printf("   " YELLOW_BG "   " RESET " Wrong position (exists in word)\n");
	printf("   " GREY_BG "   " RESET " Not in word\n");
	printf("==================================\n\n");
}

int	is_alpha_word(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{

		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}


void get_user_guess(char *guess)
{
	int	valido;

	valido = 0;
	while (!valido)
	{
		printf("👉 Enter a 5-letter word: ");
		scanf("%5s", guess);

		if (ft_strlen(guess) == 5 && is_alpha_word(guess))
		{
			for (int i = 0; i < 5; i++)
			{
				if (guess[i] >= 'a' && guess[i] <= 'z')
					guess[i] = guess[i] - 32;
			}
			valido = 1;
		}
		else
		{
			printf("❌ Error: The word must have EXACTLY 5 LETTERS!\n");
		}
	}

}

int check_repeat(char *secret_word, char guess)
{
	int i;

	i = 0;

	while (secret_word[i])
	{
		if (secret_word[i] == guess)
			return (1);
		i++;
	}

	return(0);
}

void update_grids(char grid_guesses[6][6], int grid_status[6][5], char *secret_word, char *guess, int try)
{
	int i;

	i = 0;
	while (guess[i])
	{
		grid_guesses[try][i] = guess[i];
		if (guess[i] == secret_word[i])
			grid_status[try][i] = 1;
		else if (check_repeat(secret_word, guess[i]))
			grid_status[try][i] = 2;
		else
			grid_status[try][i] = 3;
		i++;
	}
}

int	main(void)
{
	char	*ficheiro_idioma;
	char	*secret_word;
	char	grid_guesses[6][6];
	int		grid_status[6][5];
	int		lives;
	char	guess[6];
	int 	try;

	guess[0] = '\0';
	lives = 6;
	try = 0;

	ficheiro_idioma = choose_language();
	secret_word = get_random_word_from_file(ficheiro_idioma);

	if (!secret_word)
	{
		printf("Error: Could not load word database.\n");
		return (1);
	}

	zero_grid(grid_guesses, grid_status);

	while (try < lives && strcmp (guess, secret_word) != 0)
	{
		print_grid(grid_guesses, grid_status);

		// printf("(Debug - Secret Word: %s)\n\n", secret_word);

		get_user_guess(guess);

		update_grids(grid_guesses, grid_status, secret_word, guess, try);

		try++;
	}

	if (strcmp (guess, secret_word) == 0)
	{
		print_grid(grid_guesses, grid_status);
		printf("🥳 CONGRATULATIONS! You solved the Wordle in %d/6 attempts!\n", try);
	}
	else
	{
		print_grid(grid_guesses, grid_status);
		printf("😭 GAME OVER! You've run out of attempts.\n");
		printf("💡 The secret word was: %s\n", secret_word);
	}

	free(secret_word);
	return (0);
}


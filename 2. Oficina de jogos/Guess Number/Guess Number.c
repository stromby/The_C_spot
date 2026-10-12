#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define CLEAR_SCREEN() printf("\033[H\033[J")
#define CLEAN_BUFFER() { int c_garbage; while ((c_garbage = getchar()) != '\n' && c_garbage != EOF); }


void print_lives(int lives)
{
	int i;

	i = 0;
	printf("\n");
	printf("Lives: ");

	while (i < lives)
	{
		printf(" [❤️ ]");
		i++;
	}

	while (i < 5)
	{
		printf(" [ ]");
		i++;
	}

	printf(" (%d left)", lives);
	printf("\n");
	printf("───────────────────────────────────────────\n");
}

int is_valid(char c)
{

	while (c < '1' || c > '9')
	{
		printf("\n❌ Invalid input! Please enter a single DIGIT between 1 and 9.\n");
        printf("👉 Try again: ");
    	scanf(" %c", &c);

		CLEAN_BUFFER();
	}

	return (c - '0');
}

int initial_display(void)
{
	char char_guess;
	int guess;
	printf("┌──────────────────────────────────────────┐\n");
    printf("│      🎯  GUESS THE NUMBER (1-9)  🎯      │\n");
    printf("├──────────────────────────────────────────┤\n");
    printf("│  I'm thinking of a number between 1-9.   │\n");
    printf("│  You have 5 attempts to get it right!    │\n");
    printf("└──────────────────────────────────────────┘\n\n");
	print_lives(5);
	printf("👉 Enter your guess: ");
    scanf(" %c", &char_guess);

	CLEAN_BUFFER();

	guess = is_valid(char_guess);

	return(guess);
}

int compare_guess(int guess, int random, int lives)
{
	char  char_guess;

	if (guess < random)
		printf("❌ Wrong number! The secret is HIGHER.\n");
	else
		printf("❌ Wrong number! The secret is LOWER.\n");

	print_lives(lives);
	printf("👉 Enter your next guess: ");
    scanf(" %c", &char_guess);

	CLEAN_BUFFER();

	guess = is_valid(char_guess);

	return (guess);
}

void winning_display(int lives, int n)
{

	printf("┌─────────────────────────────────────────┐\n");
	printf("│      🎉  CONGRATULATIONS! YOU WIN! 🎉   │\n");
	printf("├─────────────────────────────────────────┤\n");
	printf("│  💥 You nailed it! The number was %d.    │\n", n);
	printf("│  🏆 You won with %d lives remaining!     │\n", lives);
	printf("└─────────────────────────────────────────┘\n");

}

void losing_display(int n)
{
	printf("┌─────────────────────────────────────────┐\n");
	printf("│               💀  GAME OVER 💀          │\n");
	printf("├─────────────────────────────────────────┤\n");
	printf("│  Oh no! You ran out of lives...         │\n");
	printf("│  🔮 The secret number was %d.            │\n", n);
	printf("└─────────────────────────────────────────┘\n");
}

int main() {

    #ifdef _WIN32
        SetConsoleOutputCP(65001);
    #else
        setlocale(LC_ALL, "");
    #endif

	setvbuf(stdout, NULL, _IONBF, 0);

    srand(time(NULL));

    int guess, random, lives;

    lives = 5;
    random = rand() % 9 + 1;

	CLEAR_SCREEN();

	guess = initial_display();

    while (lives > 0)
	{
        if(random == guess)
		{
			CLEAR_SCREEN();
            winning_display(lives, random);
            return 0;
        }

		lives--;

		if (lives > 0)
		{
			CLEAR_SCREEN();
			guess = compare_guess(guess, random, lives);
    	}
	}
	CLEAR_SCREEN();
    losing_display(random);

    return 0;
}
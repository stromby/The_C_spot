#include "libft.h"
#include <stdio.h>  // Obrigatório para garantir o funcionamento correto das cores
#include <unistd.h>

// Definição de cores estáveis para o printf do terminal
#define GREEN "\033[0;32m"
#define RED   "\033[0;31m"
#define RESET "\033[0m"

// Função auxiliar para imprimir [ OK ] ou [ KO ] com cores estáveis
void	print_result(int condition)
{
	if (condition)
		printf(GREEN "[ OK ]" RESET "\n");
	else
		printf(RED "[ KO ]" RESET "\n");
}

int	main(void)
{
	// DESATIVA O BUFFER: Força o printf a imprimir na hora, sem atrasos!
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("=======================================\n");
	printf("       TESTES DA SUA LIBFT (COMPLETO)  \n");
	printf("=======================================\n\n");

	// 1. Teste ft_isalpha
	printf("ft_isalpha: ");
	print_result(ft_isalpha('A') == 1 && ft_isalpha('z') == 1 && ft_isalpha('5') == 0);

	// 2. Teste ft_isdigit
	printf("ft_isdigit: ");
	print_result(ft_isdigit('0') == 1 && ft_isdigit('9') == 1 && ft_isdigit('a') == 0);

	// 3. Teste ft_isalnum
	printf("ft_isalnum: ");
	print_result(ft_isalnum('A') == 1 && ft_isalnum('5') == 1 && ft_isalnum('?') == 0);

	// 4. Teste ft_isascii
	printf("ft_isascii: ");
	print_result(ft_isascii(0) == 1 && ft_isascii(127) == 1 && ft_isascii(128) == 0 && ft_isascii(-1) == 0);

	// 5. Teste ft_isprint
	printf("ft_isprint: ");
	print_result(ft_isprint(' ') == 1 && ft_isprint('~') == 1 && ft_isprint(10) == 0);

	// 6. Teste ft_toupper
	printf("ft_toupper: ");
	print_result(ft_toupper('a') == 'A' && ft_toupper('Z') == 'Z' && ft_toupper('5') == '5');

	// 7. Teste ft_tolower
	printf("ft_tolower: ");
	print_result(ft_tolower('A') == 'a' && ft_tolower('z') == 'z' && ft_tolower('5') == '5');

	// 8. Teste ft_strcmp
	printf("ft_strcmp:  ");
	print_result(ft_strcmp("42", "42") == 0 && ft_strcmp("abc", "abz") < 0 && ft_strcmp("abz", "abc") > 0);

	// -----------------------------------------------------------------
	// VERIFICAÇÕES VISUAIS: Funções _fd (Usando fd = 1 para o ecrã)
	// -----------------------------------------------------------------
	printf("\n--- TESTES VISUAIS DAS FUNCOES _FD ---\n");

	// 9. Teste ft_putchar_fd
	printf("ft_putchar_fd (Esperado: X) | Obtido: ");
	ft_putchar_fd('X', 1);
	printf("\n");

	// 10. Teste ft_putstr_fd
	printf("ft_putstr_fd  (Esperado: Ola 42) | Obtido: ");
	ft_putstr_fd("Ola 42", 1);
	printf("\n");

	// 11. Teste ft_putnbr_fd (Validando também os limites críticos)
	printf("ft_putnbr_fd  (Esperado: -2147483648) | Obtido: ");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");

	printf("ft_putnbr_fd  (Esperado: 2147483647)  | Obtido: ");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");

	return (0);
}
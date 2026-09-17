#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>       // Obrigatório para as macros va_list, va_start, va_arg e va_end
# include <unistd.h>       // Para a função write
#include "libft.h" // Conecta o printf à tua estrutura da Libft!

// O protótipo oficial exigido pelo subject da 42
int	ft_printf(const char *format, ...);

// Funções Auxiliares de Impressão (Devem devolver o número de caracteres impressos)
// int	ft_print_char(char c);
// int	ft_print_str(char *str);
// int	ft_print_nbr(int n);
// int	ft_print_unsigned(unsigned int n);
// int	ft_print_hex(unsigned int n, char format);
// int	ft_print_ptr(unsigned long long ptr);

#endif

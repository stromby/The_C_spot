#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/includes/libft.h"

int	ft_printf(const char *format, ...);

// Funções Auxiliares
int ft_check_format(char format, va_list args);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int n, char format);
int	ft_print_ptr(unsigned long long ptr);

#endif

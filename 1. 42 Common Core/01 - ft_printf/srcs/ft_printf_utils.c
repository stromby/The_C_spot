/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 22:02:28 by hmoura            #+#    #+#             */
/*   Updated: 2026/09/22 22:02:30 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char format, va_list args)
{
	if (format == '%')
		return (ft_print_char ('%'));
	else if (format == 'c')
		return (ft_print_char (va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str (va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_nbr (va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unsigned (va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), format));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long long)));
	return (0);
}

int	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

static int	ft_putptr_hex(unsigned long long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = count + ft_putptr_hex(n / 16, base);
	count = count + ft_print_char(base[n % 16]);
	return (count);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str("(nil)"));
	count = count + ft_print_str("0x");
	count = count + ft_putptr_hex(ptr, "0123456789abcdef");
	return (count);
}

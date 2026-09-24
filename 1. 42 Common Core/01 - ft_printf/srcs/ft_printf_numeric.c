/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 22:02:15 by hmoura            #+#    #+#             */
/*   Updated: 2026/09/22 22:02:17 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_long(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count = count + ft_print_char('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		count = count + ft_print_nbr(nbr / 10);
	}
	count = count + ft_print_char((nbr % 10) + '0');
	return (count);
}

int	ft_print_nbr(int n)
{
	return (ft_putnbr_long((long)n));
}

int	ft_print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count = count + ft_print_unsigned(n / 10);
	count = count + ft_print_char((n % 10) + '0');
	return (count);
}

static int	ft_putnb_hex(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = count + ft_putnb_hex(n / 16, base);
	count = count + ft_print_char(base[n % 16]);
	return (count);
}

int	ft_print_hex(unsigned int n, char format)
{
	if (format == 'x')
		return (ft_putnb_hex(n, "0123456789abcdef"));
	return (ft_putnb_hex(n, "0123456789ABCDEF"));
}

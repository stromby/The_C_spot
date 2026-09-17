#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_intlen_inc_signal(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	int		i_min;
	char	*ptr;

	nb = n;
	i_min = 0;
	len = ft_intlen_inc_signal(nb);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
		i_min = 1;
	}
	while (len >= i_min)
	{
		ptr[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (ptr);
}

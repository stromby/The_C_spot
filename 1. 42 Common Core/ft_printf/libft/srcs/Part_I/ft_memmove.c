#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (n-- > 0)
			*d-- = *s--;
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}

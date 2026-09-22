#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	if (!format)
		return(-1);
	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (-1);
			i++;
			count = count + ft_check_format(format[i], args);
		}
		else
			count = count + ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

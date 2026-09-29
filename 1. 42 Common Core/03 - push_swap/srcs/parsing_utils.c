/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:53:57 by hmoura            #+#    #+#             */
/*   Updated: 2026/09/28 12:54:29 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

char	*join_arguments(int argc, char **argv)
{
	int		i;
	char	*str;
	char	*temp;

	i = 1;
	str = ft_strdup("");
	while (i < argc)
	{
		temp = ft_strjoin(str, argv[i]);
		free(str);
		str = ft_strjoin(temp, " ");
		free (temp);
		i++;
	}
	return (str);
}

int	ft_atoi_check(const char *str, int *result)
{
	int		i;
	int		sign;
	long	num;

	num = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		if ((sign == 1 && num > INT_MAX) || (sign == -1 && (-num) < INT_MIN))
			return (1);
		i++;
	}
	*result = (int) num * sign;
	return (0);
}

int	check_duplicates(t_stack *stack, int value)
{
	if (!stack)
		return (0);
	while (stack != NULL)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

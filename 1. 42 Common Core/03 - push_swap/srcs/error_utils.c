/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:12:11 by hmoura            #+#    #+#             */
/*   Updated: 2026/09/28 12:46:38 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_matrix(char **matrix)
{
	int	i;

	if (!matrix)
		return ;
	i = 0;
	while (matrix [i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current;

	if (!stack || !*stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	error_exit(t_stack **stack_a, char **args)
{
	if (stack_a && *stack_a)
		free_stack(stack_a);
	if (args)
		free_matrix(args);
	write(2, "Error\n", 6);
	exit(1);
}

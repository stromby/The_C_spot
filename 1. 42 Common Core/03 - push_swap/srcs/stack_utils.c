/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:43:18 by hmoura            #+#    #+#             */
/*   Updated: 2026/10/06 19:32:55 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_add_back(t_stack **stack, t_stack *new_node)
{
	t_stack	*last;

	if (!new_node)
		return ;
	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	last = stack_last(*stack);
	last->next = new_node;
}

int	stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

void	index_stack(t_stack *stack)
{
	t_stack	*current;
	t_stack	*node;
	int		min;
	int		i;
	int		size;

	size = stack_size(stack);
	i = 0;
	while (i < size)
	{
		current = stack;
		node = NULL;
		while (current != NULL)
		{
			if (current->index == -1 && (node == NULL || current->value < min))
			{
				min = current->value;
				node = current;
			}
			current = current->next;
		}
		if (node != NULL)
			node->index = i;
		i++;
	}
}

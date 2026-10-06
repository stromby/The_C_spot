/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:30:56 by hmoura            #+#    #+#             */
/*   Updated: 2026/10/06 20:16:10 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*new_node;

	new_node = malloc (sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	new_node->pos = -1;
	new_node->above_median = 0;
	new_node->push_cost = 0;
	new_node->target_node = NULL;
	new_node->next = NULL;
	return (new_node);
}

t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack	*find_min_node(t_stack *stack)
{
	t_stack	*min_node;
	int		min_index;

	if (!stack)
		return (NULL);
	min_index = stack->index;
	min_node = stack;
	while (stack)
	{
		if (stack->index < min_index)
		{
			min_index = stack->index;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

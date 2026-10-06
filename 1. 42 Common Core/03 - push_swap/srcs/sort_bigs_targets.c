/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bigs_targets.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:37:27 by hmoura            #+#    #+#             */
/*   Updated: 2026/10/06 20:19:24 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*find_max_index(t_stack *stack)
{
	t_stack	*max_node;
	int		max_index;

	if (!stack)
		return (NULL);
	max_index = -1;
	max_node = stack;
	while (stack)
	{
		if (stack->index > max_index)
		{
			max_index = stack->index;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

void	set_target_a(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*temp_a;
	long	closest_higher_index;

	while (stack_b)
	{
		closest_higher_index = LONG_MAX;
		temp_a = stack_a;
		while (temp_a)
		{
			if (temp_a->index > stack_b->index
				&& temp_a->index < closest_higher_index)
			{
				stack_b->target_node = temp_a;
				closest_higher_index = temp_a->index;
			}
			temp_a = temp_a->next;
		}
		if (closest_higher_index == LONG_MAX)
			stack_b->target_node = find_min_node(stack_a);
		stack_b = stack_b->next;
	}
}

void	set_target_b(t_stack *stack_a, t_stack *stack_b)
{
	int		closest_smaller_index;
	t_stack	*temp;

	while (stack_a)
	{
		temp = stack_b;
		closest_smaller_index = -1;
		while (temp)
		{
			if ((temp->index < stack_a->index)
				&& (temp->index > closest_smaller_index))
			{
				closest_smaller_index = temp->index;
				stack_a->target_node = temp;
			}
			temp = temp->next;
		}
		if (closest_smaller_index == -1)
			stack_a->target_node = find_max_index(stack_b);
		stack_a = stack_a->next;
	}
}

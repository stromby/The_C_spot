/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bigs_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:10:20 by hmoura            #+#    #+#             */
/*   Updated: 2026/10/06 20:19:28 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	max_cost(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

void	set_current_pos(t_stack *stack)
{
	int	i;
	int	median;

	if (!stack)
		return ;
	i = 0;
	median = stack_size(stack) / 2;
	while (stack)
	{
		stack->pos = i;
		if (i <= median)
			stack->above_median = 1;
		else
			stack->above_median = 0;
		stack = stack->next;
		i++;
	}
}

void	calculate_prices(t_stack *stack_a, t_stack *stack_b)
{
	int	len_a;
	int	len_b;
	int	cost_a;
	int	cost_b;

	len_a = stack_size(stack_a);
	len_b = stack_size(stack_b);
	while (stack_a)
	{
		cost_a = stack_a->pos;
		if (!stack_a->above_median)
			cost_a = len_a - stack_a->pos;
		cost_b = stack_a->target_node->pos;
		if (!stack_a->target_node->above_median)
			cost_b = len_b - stack_a->target_node->pos;
		if (stack_a->above_median && stack_a->target_node->above_median)
			stack_a->push_cost = max_cost(cost_a, cost_b);
		else if (!stack_a->above_median && !stack_a->target_node->above_median)
			stack_a->push_cost = max_cost(cost_a, cost_b);
		else
			stack_a->push_cost = cost_a + cost_b;
		stack_a = stack_a->next;
	}
}

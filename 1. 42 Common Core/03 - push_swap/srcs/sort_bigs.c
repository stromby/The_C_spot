/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bigs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:10:20 by hmoura            #+#    #+#             */
/*   Updated: 2026/10/06 20:19:29 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*get_cheapest(t_stack *stack)
{
	t_stack	*cheapest;
	long	min_cost;

	if (!stack)
		return (NULL);
	min_cost = LONG_MAX;
	cheapest = stack;
	while (stack)
	{
		if (stack->push_cost < min_cost)
		{
			min_cost = stack->push_cost;
			cheapest = stack;
		}
		stack = stack->next;
	}
	return (cheapest);
}

static void	rotate_both(t_stack **a, t_stack **b, t_stack *cheap)
{
	if (cheap->above_median && cheap->target_node->above_median)
	{
		while (*a != cheap && *b != cheap->target_node)
			rr(a, b);
		set_current_pos(*a);
		set_current_pos(*b);
	}
	else if (!cheap->above_median && !cheap->target_node->above_median)
	{
		while (*a != cheap && *b != cheap->target_node)
			rrr(a, b);
		set_current_pos(*a);
		set_current_pos(*b);
	}
}

void	move_b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	set_current_pos(*stack_a);
	set_current_pos(*stack_b);
	set_target_a(*stack_a, *stack_b);
	while (*stack_a != (*stack_b)->target_node)
	{
		if ((*stack_b)->target_node->above_median)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pa(stack_a, stack_b);
}

void	move_cheapest_to_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheapest;

	cheapest = get_cheapest(*stack_a);
	rotate_both(stack_a, stack_b, cheapest);
	while (*stack_a != cheapest)
	{
		if (cheapest->above_median)
			ra(stack_a);
		else
			rra(stack_a);
	}
	while (*stack_b != cheapest->target_node)
	{
		if (cheapest->target_node->above_median)
			rb(stack_b);
		else
			rrb(stack_b);
	}
	pb(stack_b, stack_a);
}

void	turk_algorithm(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*min_node;

	pb(stack_b, stack_a);
	pb(stack_b, stack_a);
	while (stack_size(*stack_a) > 3)
	{
		set_current_pos(*stack_a);
		set_current_pos(*stack_b);
		set_target_b(*stack_a, *stack_b);
		calculate_prices(*stack_a, *stack_b);
		move_cheapest_to_b(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (*stack_b)
		move_b_to_a(stack_a, stack_b);
	set_current_pos(*stack_a);
	min_node = find_min_node(*stack_a);
	while (*stack_a != min_node)
	{
		if (min_node->above_median)
			ra(stack_a);
		else
			rra(stack_a);
	}
}

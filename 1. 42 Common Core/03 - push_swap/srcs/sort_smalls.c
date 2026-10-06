/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_smalls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:10:20 by hmoura            #+#    #+#             */
/*   Updated: 2026/10/06 16:49:33 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

void	sort_three(t_stack **stack)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = (*stack)->value;
	n2 = (*stack)->next->value;
	n3 = (*stack)->next->next->value;
	if (n3 > n2 && n2 < n1 && n1 > n3)
		ra(stack);
	else if (n1 > n2 && n1 < n3)
		sa(stack);
	else if (n1 > n2 && n2 > n3)
	{
		sa(stack);
		rra(stack);
	}
	else if (n1 < n2 && n1 > n3)
		rra(stack);
	else if (n1 < n2 && n2 > n3)
	{
		sa(stack);
		ra(stack);
	}
}

int	get_min_pos(t_stack *stack, int target_index)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->index == target_index)
			return (i);
		stack = stack->next;
		i++;
	}
	return (0);
}

void	push_min_to_b(t_stack **stack_a, t_stack **stack_b, int target_index)
{
	int	size;
	int	pos;

	size = stack_size(*stack_a);
	pos = get_min_pos(*stack_a, target_index);
	if (pos <= size / 2)
	{
		while (pos > 0)
		{
			ra(stack_a);
			pos--;
		}
		pb(stack_b, stack_a);
	}
	else
	{
		while (pos < size)
		{
			rra(stack_a);
			pos++;
		}
		pb(stack_b, stack_a);
	}
}

void	sort_small(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size == 5)
	{
		push_min_to_b(stack_a, stack_b, 0);
		push_min_to_b(stack_a, stack_b, 1);
	}
	else if (size == 4)
		push_min_to_b(stack_a, stack_b, 0);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	if (size == 5)
		pa(stack_a, stack_b);
}

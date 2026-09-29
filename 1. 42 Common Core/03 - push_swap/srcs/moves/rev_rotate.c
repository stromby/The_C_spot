/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:10:20 by hmoura            #+#    #+#             */
/*   Updated: 2026/09/29 18:04:41 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	generic_rev_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*penult;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	penult = *stack;
	while (penult->next->next)
		penult = penult->next;
	last = penult->next;
	penult->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_stack **stack_a)
{
	generic_rev_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	generic_rev_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	generic_rev_rotate(stack_a);
	generic_rev_rotate(stack_b);
	write(1, "rrr\n", 4);
}

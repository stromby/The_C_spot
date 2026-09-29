/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 14:08:57 by hmoura            #+#    #+#             */
/*   Updated: 2026/09/29 18:01:29 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	generic_push(t_stack **dest, t_stack **src)
{
	t_stack	*temp;

	if (!src || !*src)
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	generic_push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	generic_push(stack_b, stack_a);
	write(1, "pb\n", 3);
}

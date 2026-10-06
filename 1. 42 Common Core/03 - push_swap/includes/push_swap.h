/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:10:30 by hmoura            #+#    #+#             */
/*   Updated: 2026/10/06 20:19:26 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				above_median;
	int				push_cost;
	struct s_stack	*target_node;
	struct s_stack	*next;
}	t_stack;

/* stack_utils.c */
void	stack_add_back(t_stack **stack, t_stack *new_node);
int		stack_size(t_stack *stack);
void	index_stack(t_stack *stack);

/* stack_utils_2.c */
t_stack	*stack_new(int value);
t_stack	*stack_last(t_stack *lst);
t_stack	*find_min_node(t_stack *stack);

/* error_utils.c */
void	free_matrix(char **matrix);
void	free_stack(t_stack **stack);
void	error_exit(t_stack **stack_a, char **args);

/* parsing_utils.c */
int		is_valid_number(char *str);
char	*join_arguments(int argc, char **argv);
int		ft_atoi_check(const char *str, int *result);
int		check_duplicates(t_stack *stack, int value);

/* swap.c */
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

/* push.c */
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);

/* rotate.c */
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);

/* rev_rotate.c */
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

/* sort_smalls.c */
void	sort_two(t_stack **stack);
void	sort_three(t_stack **stack);
int		get_min_pos(t_stack *stack, int target_index);
void	push_min_to_b(t_stack **stack_a, t_stack **stack_b, int target_index);
void	sort_small(t_stack **stack_a, t_stack **stack_b);

/* sort_bigs.c */
void	move_cheapest_to_b(t_stack **stack, t_stack **stack_b);
void	move_b_to_a(t_stack **stack_a, t_stack **stack_b);
void	turk_algorithm(t_stack **stack_a, t_stack **stack_b);

/* sort_bigs_utils.c */
void	set_current_pos(t_stack *stack);
void	calculate_prices(t_stack *stack_a, t_stack *stack_b);

/* sort_bigs_targets.c */
void	set_target_a(t_stack *stack_a, t_stack *stack_b);
void	set_target_b(t_stack *stack_a, t_stack *stack_b);

#endif

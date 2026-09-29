/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:10:20 by hmoura            #+#    #+#             */
/*   Updated: 2026/09/29 18:52:12 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_stack(t_stack **stack_a, char **args)
{
	int		i;
	int		value;
	t_stack	*new_node;

	i = 0;
	while (args[i])
	{
		if (!is_valid_number(args[i]))
			error_exit(stack_a, args);
		if (ft_atoi_check(args[i], &value) == 1)
			error_exit(stack_a, args);
		if (check_duplicates(*stack_a, value) == 1)
			error_exit(stack_a, args);
		new_node = stack_new(value);
		if (!new_node)
			error_exit(stack_a, args);
		stack_add_back(stack_a, new_node);
		i++;
	}
}

void	print_stacks(t_stack *stack_a)
{
	t_stack	*temp_a;

	temp_a = stack_a;
	printf("\n========= VISUALIZADOR ======\n");
	printf("	|     STK_A    │\n");
	printf("	|──────────────|\n");

	while (temp_a)
	{
		if (temp_a)
		{
			printf("	|       %-5d  │\n", temp_a->value);
			temp_a = temp_a->next;
		}
	}
	printf("=============================\n\n");

}

int	main(int argc, char **argv)
{
	char	*full_str;
	char	**args;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	if (argc < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	full_str = join_arguments(argc, argv);
	if (!full_str)
		return (1);
	args = ft_split(full_str, ' ');
	free(full_str);
	if (!args || !args[0])
		error_exit(&stack_a, args);
	fill_stack(&stack_a, args);
	free_matrix(args);
	size = stack_size(stack_a);
	index_stack(stack_a);
	if (size == 2)
		sort_two(&stack_a);
	else if (size == 3)
		sort_three(&stack_a);
	else if (size <= 5)
		sort_small(&stack_a, &stack_b);
	// else
	// 	turk_algorithm(&stack_a, &stack_b);

	print_stacks(stack_a); // apagar este teste antes de entregar

	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}

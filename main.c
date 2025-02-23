/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:25:27 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/23 20:16:19 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	int		len;
	t_node	*stack_a;
	t_node	*stack_b;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	if (fill_stack_a(&stack_a, av) == 0 || duplicate(stack_a) == 0)
	{
		write(2, "Error\n", 6);
		free_stack(&stack_a);
		return (0);
	}
	len = stack_size(stack_a);
	if (check_sort(stack_a) == 1)
	{
		free_stack(&stack_a);
		return (0);
	}
	else
		sorting(&stack_a, &stack_b, len);
	free_stack(&stack_a);
}

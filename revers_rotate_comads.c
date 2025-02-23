/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_rotate_comads.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:44:19 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/18 15:44:22 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*bottom;
	t_node	*before_bottom;
	t_node	*tmp;

	if (stack && *stack && (*stack)->next)
	{
		bottom = last_node(*stack);
		before_bottom = before_last_node(*stack);
		tmp = *stack;
		*stack = bottom;
		(*stack)->next = tmp;
		before_bottom->next = NULL;
	}
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}
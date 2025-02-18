/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_comands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:45:09 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/18 15:45:16 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **stack_1, t_node **stack_2)
{
	t_node	*tmp;

	if (!*stack_1)
		return ;
	tmp = (*stack_1)->next;
	(*stack_1)->next = *stack_2;
	*stack_2 = *stack_1;
	*stack_1 = tmp;
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}

void	pa(t_node **stack_b, t_node **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}
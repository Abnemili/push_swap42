/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_commads.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:42:34 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/18 15:42:38 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*head;
	t_node	*bottom;

	if (stack && *stack && (*stack)->next)
	{
		head = *stack;
		bottom = last_node(head);
		*stack = head->next;
		bottom->next = head;
		head->next = NULL;
	}
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

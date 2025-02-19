/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:14:19 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/19 13:21:32 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_position(t_node **stack_a, int total)
{
	int		i;
	t_node	*stack;

	stack = *stack_a;
	i = 0;
	while (i < stack_size(*stack_a))
	{
		if (stack->index < total)
			break ;
		stack = stack->next;
		i++;
	}
	return (i);
}

int	get_max(t_node *stack)
{
	t_node	*node;
	int		max;

	node = stack;
	if (!node)
		return (0);
	max = node->value;
	while (node)
	{
		if (node->next != NULL && max < node->next->value)
		{
			max = node->next->value;
		}
		node = node->next;
	}
	return (max);
}

int	get_max_position(t_node *stack, int c)
{
	t_node	*node;
	int		i;

	i = 0;
	node = stack;
	if (!stack)
		return (0);
	while (node)
	{
		if (node->value == c)
			break ;
		node = node->next;
		i++;
	}
	return (i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:37:06 by abnemili          #+#    #+#             */
/*   Updated: 2025/03/01 19:06:49 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_node *stack_a)
{
	t_node	*head;

	head = stack_a;
	while (head != NULL && head->next != NULL)
	{
		if ((head->value) > (head->next)->value)
			return (0);
		head = head->next;
	}
	return (1);
}

int	stack_size(t_node *stack_a)
{
	int		count;
	t_node	*head;

	head = stack_a;
	count = 0;
	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}

int	max_value(t_node *stack_a)
{
	t_node	*head;
	int		max;

	head = stack_a;
	max = head->value;
	while (head)
	{
		if (head->next != NULL && max < head->next->value)
			max = head->next->value;
		head = head->next;
	}
	return (max);
}

int	min_value(t_node *stack_a)
{
	t_node	*head;
	int		min;

	head = stack_a;
	min = head->value;
	while (head)
	{
		if (head->next != NULL && min > head->next->value)
			min = head->next->value;
		head = head->next;
	}
	return (min);
}

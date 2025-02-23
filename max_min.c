/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:03:00 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/20 14:03:14 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max(t_node *stack_a)
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

int	min(t_node *stack_a)
{
	t_node *head;
	int min;

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
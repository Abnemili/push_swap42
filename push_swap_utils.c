/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:37:06 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/20 13:36:47 by abnemili         ###   ########.fr       */
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
	int i;
	t_node *head;

	head = stack_a;
	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}
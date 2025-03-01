/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:27:42 by abnemili          #+#    #+#             */
/*   Updated: 2025/03/01 14:07:02 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplication(t_node *stack)
{
	t_node	*node1;
	t_node	*node2;

	node1 = stack;
	while (node1)
	{
		node2 = node1->next;
		while (node2)
		{
			if (node1->value == node2->value)
				return (0);
			node2 = node2->next;
		}
		node1 = node1->next;
	}
	return (1);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_valid(char *args)
{
	int	i;

	i = 0;
	if (args[i] == '-' || args[i] == '+')
		i++;
	if (args[i] == '\0')
		return (0);
	while (args[i])
	{
		if (is_digit(args[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

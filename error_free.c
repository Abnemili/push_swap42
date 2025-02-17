/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:40:33 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/15 17:35:22 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **arg_str)
{
	int	i;

	i = 0;
	while (arg_str[i])
	{
		free(arg_str[i]);
		i++;
	}
	free(arg_str);
}

void	free_stack(t_node **stack)
{
	t_node	*node;

	while (*stack)
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}
}
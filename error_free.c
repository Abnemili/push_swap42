/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:32:14 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/18 15:34:37 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
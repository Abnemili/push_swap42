/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:29:32 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/28 20:12:38 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_node **stack_a, char **arg_str)
{
	t_node	*node;
	int		i;

	i = 0;
	while (arg_str[i])
	{
		node = creat_node(ft_atol(arg_str[i]));
		add_node(stack_a, node);
		i++;
	}
}

int	fill_stack_a(t_node **stack, char **av)
{
	char	**arg_str;
	int		i;
	int		j;

	i = 1;
	while (av[i])
	{
		arg_str = ft_split(av[i], ' ');
		if (!arg_str[0])
			return (ft_free(arg_str), 0);
		j = 0;
		while (arg_str[j])
		{
			if (is_valid(arg_str[j]) == 0)
				return (ft_free(arg_str), 0);
			if (ft_atol(arg_str[j]) > INT_MAX || ft_atol(arg_str[j]) < INT_MIN)
				return (ft_free(arg_str), 0);
			j++;
		}
		fill_stack(stack, arg_str);
		ft_free(arg_str);
		i++;
	}
	return (1);
}

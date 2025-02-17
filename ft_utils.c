/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:45:46 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/15 17:39:19 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long double	ft_atol(const char *str)
{
	int			i;
	int			sing;
	long double	res;

	i = 0;
	sing = 1;
	res = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sing = -sing;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sing * res);
}

int	size_of_stack(t_node *stack_a)
{
	int		i;
	t_node	*head;

	head = stack_a;
	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}

int is_sorted(t_node *stack_a)
{
    t_node *head;

    head = stack_a;
    while (head != NULL && head->next != NULL)
    {
        if ((head->value) > (head->next)->value)
            return (0);
        head = head->next;
    }
    return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:46:54 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/19 13:13:35 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_pb(t_node **stack_a, t_node **stack_b)
{
	ra(stack_a);
	ra(stack_a);
	pb(stack_a, stack_b);
}

void	rra_pb(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	rra(stack_a);
	pb(stack_a, stack_b);
}

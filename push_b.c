/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:51:48 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/19 13:51:39 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_b(t_node **stack_a, t_node **stack_b, int amnt)
{
    int i;
    int stack_len;

    stack_len = stack_size(*stack_a);
    i = 0;
    while (i < stack_len)
    {
        if ((*stack_a)->index <= i)
        {
            pb(stack_a, stack_b);
            rb(stack_a);
            i++;
        }
        else if ((*stack_a)->index <= (i + amnt))
        {
            pb(stack_a, stack_b);
            i++;
        }
        else if (get_position(stack_a, (amnt
                    + i)) < (stack_size(*stack_a) / 2))
            ra(stack_a);
        else 
            rra(stack_a);
    }
    push_a(stack_a, stack_b);
}

void	push_to_a(t_node **stack_a, t_node **stack_b)
{
	int	max;
	int	max_pos;

	max = get_max(*stack_b);
	max_pos = get_max_position(*stack_b, max);
	while (stack_size(*stack_b) > 0)
	{
		if (max == (*stack_b)->value)
		{
			pa(stack_b, stack_a);
			if (stack_size(*stack_b) > 0)
			{
				max = get_max(*stack_b);
				max_pos = get_max_position(*stack_b, max);
			}
		}
		else
		{
			if (max_pos <= ( stack_size(*stack_b) / 2))
				rb(stack_b);
			else
				rrb(stack_b);
		}
	}
}
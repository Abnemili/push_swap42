/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:12:34 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/17 13:33:49 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void sort_2(t_node **stack_a)
{
    if((*stack_a)->value > (*stack_a)->next->value)
        sa(stack_a);
    else
        return ;
}

void sort_3 (t_node **stack)
{
    if ((*stack)->value == max(*stack)) // max function needs ti be implimented 
        ra(stack);// needs to be implimented 
    else if ((*stack)->next->value == max(*stack))
        rra(stack); // needs to be implimented 
    sort_2(stack);
}
void sorting(t_node **stack_a, t_node **stack_b, int stack_len)
{
    if (stack_len == 2)
        sort_2(stack_a);
    else if (stack_len == 3)
        sort_3 (stack_a);
    else if (stack_len == 4)
        sort_5(stack_a, stack_b);
    else if (stack_len == 5)
        sort_5(stack_a, stack_b);
    else 
        sort_stack(stack_a, stack_b, stack_len);
}
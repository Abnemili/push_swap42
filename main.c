/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:19:10 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/16 14:11:21 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char **av)
{
    int     stack_len;
    t_node  *stack_a;
    t_node  *stack_b;
    
    if (ac == 1)
        return (0);
    stack_a = NULL;
    stack_b = NULL;
    if (fill_stack_a(&stack_a, av) == 0 || duplicate(stack_a) == 0)
    {
        write (2, "ERROR\n", 6);
        free_stack(&stack_a);
        return (0);
    }
    stack_len = size_of_stack(stack_a);
    if (is_sorted(stack_a) == 1)
    {
        free_stack(stack_a);
        return (0);
    }
    else
        sorting(&stack_a, &stack_b, stack_len);
    free_stack(&stack_a);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_comande.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:16:22 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/17 13:26:43 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void swap (t_node **stack)
{
    t_node  *head;
    t_node  *node_next;
    int     tmp;

    if (stack && *stack && (*stack)->next)
    {
        head = *stack;
        node_next = (*stack)->next;
        tmp = head->value;
        head->value = node_next->value;
        node_next->value = tmp;
    }
}
void sa(t_node **stack_a)
{
    swap(stack_a);
    write (1, "sa\n", 3);
}

/// declaire in trhe hader 
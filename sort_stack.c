/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:03:56 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/17 18:24:31 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *fill_arr (t_node *stack_a, int *arr, int stack_len)
{
    int index;

    index = 0;
    while (stack_a && index < stack_len)
    {
        arr[index] = stack_a->value;
        stack_a = stack_a->next;
        index++;
    }
    return (arr);
}

int *sort_arr(int *arr, int stack_len)
{
    int     i;
    int     j;
    int     swap;

    j = 0;
    while (j < stack_len)
    {
        i = j + 1;
        while (i < stack_len)
        {
            if (arr[j] > arr[i])
            {
                swap = arr[j];
                arr[j] = arr[i];
                arr[i] = swap;
            }
            i++;
        }
        j++;
    }
    return (arr);
}
void indexing(t_node **stack_a, int *arr, int stack_len)
{
    t_node  *stack;
    int     i;

    i = 0;
    while (i < stack_len)
    {
        stack = *stack_a; // initialize the stack with the head 
       while (stack)
       {
            if (stack->value == arr[i])
            {
                stack->index = i;
                break;
            }
            stack = stack->next;
       }
       i++:
    }

}


void sort_stack (t_node **stack_a, t_node **stack_b, int stack_len)
{
    int     *arr;
    
    arr = (int *)malloc(sizeof(int) * stack_len);
    if (!arr)
        return (NULL);
    arr = fill_arr(*stack_a, arr, stack_len);
    // sort the array of int;
    sort_arr(arr, stack_len);
    indexing(stack_a, arr, stack_len);
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:27:12 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/15 15:32:00 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void fill_stack (char **stack_a , char *av_str)
{
    t_node *node;
    int     i;
    
    i = 0;
    while (av_str[i])
    {
        node = new_node(ft_atol(av_str[i]));
        add_node (stack_a, node);
        i++;
    }
}


int fill_stack_a(char **stack_a, char **av)
{
    int     i;
    int     j;
    char    **av_str;
    
    i = 1;
    while (av[i])
    {
        av_str = ft_split(av[i], ' ');
        if (!av_str[0])
            return (ft_free(av_str), 0);
        j = 0;
        while (av_str[j])
        {
            if (is_valid(av_str[j]) == 0)
                return (ft_free(av_str), 0);
            if (ft_atol(av_str[j]) > INT_MAX || ft_atol(av[j]) < INT_MIN)
                return (ft_free(av_str), 0);
            j++;
        }
        fill_stack(stack_a, av_str);
        ft_free(av_str);
        i++;
    }
    return (1);
}
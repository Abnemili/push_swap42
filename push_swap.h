/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:19:42 by abnemili          #+#    #+#             */
/*   Updated: 2025/02/16 14:13:44 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
    int     index;
    int     value;
    struct node *next;
}t_node;

// fill the stack 
int fill_stack_a(char **stack_a, char **av);
void fill_stack (char **stack_a , char *av_str);

// check for syntax error
int	is_valid(char *args);
int	duplicate(t_node *stack);

// programm utils
long double	ft_atol(const char *str);
int	size_of_stack(t_node *stack_a);

// hanndl input 
char **ft_split(char *av, char c);

// error free 
void	ft_free(char **arg_str);
void	free_stack(t_node **stack);

// sorting 
int is_sorted(t_node *stack_a);
void sorting(t_node **stack_a, t_node **stack_b, int stack_len);

#endif

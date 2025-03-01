/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:26:06 by abnemili          #+#    #+#             */
/*   Updated: 2025/03/01 14:07:15 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				index;
	int				value;
	struct s_node	*next;
}					t_node;

t_node				*creat_node(int nbr);
void				add_node(t_node **stack_a, t_node *new_node);
int					is_digit(char c);
void				fill_stack(t_node **stack_a, char **arg_str);
int					is_valid(char *args);
void				ft_free(char **arg_str);
int					fill_stack_a(t_node **stack, char **av);
long				ft_atol(const char *str);
t_node				*last_node(t_node *stack);
t_node				*before_last_node(t_node *stack);
int					max(t_node *stack_a);
int					min(t_node *stack_a);
int					check_sort(t_node *stack_a);
int					stack_size(t_node *stack_a);
int					duplication(t_node *stack);
void				free_stack(t_node **stack);
void				push(t_node **stack_1, t_node **stack_2);
void				pb(t_node **stack_a, t_node **stack_b);
void				pa(t_node **stack_b, t_node **stack_a);
void				reverse_rotate(t_node **stack);
void				rra(t_node **stack_a);
void				rrb(t_node **stack_b);
void				rotate(t_node **stack);
void				ra(t_node **stack_a);
void				rb(t_node **stack_b);
void				swap(t_node **stack);
void				sa(t_node **stack_a);
void				sb(t_node **stack_b);
char				**ft_split(char const *s, char c);
void				sorting(t_node **stack_a, t_node **stack_b, int size);
void				sort_2(t_node **stack_a);
void				sort_3(t_node **stack_a);
void				sort_4(t_node **stack_a, t_node **stack_b);
void				sort_5(t_node **stack_a, t_node **stack_b);
void				ra_pb(t_node **stack_a, t_node **stack_b);
void				rra_pb(t_node **stack_a, t_node **stack_b);
void				sort_stack(t_node **stack_a, t_node **stack_b, int len);
int					*fill_arr(t_node *stack_a, int *array, int len);
int					get_max(t_node *stack);
int					get_max_position(t_node *stack, int c);
int					get_position(t_node **stack_a, int total);
void				push_b(t_node **stack_a, t_node **stack_b, int chank);
void				push_a(t_node **stack_a, t_node **stack_b);

#endif

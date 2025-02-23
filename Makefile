# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/23 18:35:00 by abnemili          #+#    #+#              #
#    Updated: 2025/02/23 18:35:22 by abnemili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
RM = rm -rf 

SRC = algo_utils.c hande_list.c push_comands.c sorintg_algo.c \
	check_valide.c input_handling.c sorting_utils.c \
	error_free.c main.c push_swap_utils.c sort_stack.c max_min.c \
	fill_stack_a.c revers_rotate_comads.c  swap_comande.c \
	ft_split.c push_b.c rotate_commads.c creat_node.c \

OBJ = ${SRC:.c=.o}

NAME = push_swap

$(NAME) :
	cc $(CFLAGS) $(SRC) -o $(NAME)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(NAME)

re : fclean all


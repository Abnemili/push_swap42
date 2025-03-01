# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/23 18:35:00 by abnemili          #+#    #+#              #
#    Updated: 2025/03/01 15:31:47 by abnemili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
RM = rm -rf 

SRC = algo_utils.c hande_list.c push_comands.c sorting.c \
	check_input.c ft_atol.c sorting_utils.c \
	error_free.c main.c push_swap_utils.c sort_stack.c \
	fill_stack_a.c revers_rotate.c  sa_sb.c \
	ft_split.c push_a_b.c rotate_commads.c creation.c \

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


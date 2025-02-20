CFLAGS = -Wall -Wextra -Werror
RM = rm -rf 

SRC = algo_utils.c hande_list.c push_comands.c sorintg_algo.c \
	check_valide.c input_handling.c push_swap.h sorting_utils.c \
	error_free.c main.c push_swap_utils.c sort_stack.c \
	fill_stack_a.c revers_rotate_comads.c  swap_comande.c \
	ft_split.c push_b.c rotate_commads.c \

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


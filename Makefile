SRC = push_swap.c check_error.c create_linked_list.c
LIBFT = libft/libft.a
OBJ = $(SRC:.c=.o)

CC = CC
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	make bonus -C libft/
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
		
clean :
	rm -rf $(OBJ)
	make fclean -C libft/

fclean : clean
	rm -rf $(NAME)

re: fclean $(NAME)
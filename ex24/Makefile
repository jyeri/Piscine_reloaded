
NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putchar.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
INC = ./includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(INC)
	ar rc $(NAME) *.o
	
clean:
	rm -rf *.o

fclean: clean
	rm $(NAME)

re: fclean all

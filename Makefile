NAME = libftprintf.a

SRC = ft_printf.c handle_conversion.c ft_putchar_m.c ft_print_char.c ft_print_int.c ft_print_hex.c
      ft_print_ptr.c ft_print_str.c ft_print_uns.c 
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
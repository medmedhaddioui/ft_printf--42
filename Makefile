NAME = libftprintf.a

SRC 	= ft_hex_adress.c ft_print_dec_hex.c ft_printf.c ft_putchar_fd.c ft_putstr_fd.c  
OBJS = $(SRC:.c=.o)

RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re
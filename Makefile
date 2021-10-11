NAME = libftprintf.a

SRCS = Srcs/charstring.c \
	Srcs/int_uint.c \
	Srcs/hex.c \
	Srcs/ft_printf.c \

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror -c

%.o: %.c
	gcc $(CFLAGS) -I Includes $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	rm -f $(NAME) $(OBJS)

fclean:
	$(MAKE) fclean -C ./libft
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re

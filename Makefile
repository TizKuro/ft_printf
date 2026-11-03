NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -I$(LIBFT_DIR)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = ft_printf.c \
	ft_pmemory.c \
	ft_putnbr_hexadecimal_fd.c \
	ft_putnbr_unsigned_fd.c \
	ft_putstr_fd.c \
	ft_putchar_fd.c \
	ft_putnbr_fd.c	\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h $(LIBFT_DIR)/libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

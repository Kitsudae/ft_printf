NAME =	libftprintf.a

SRCS =	ft_check_type.c ft_conversion.c ft_count_digit_num.c \
ft_count_digit_num_long.c ft_create_pointer_address.c ft_dec_to_hex.c \
ft_is_in_the_set.c ft_printf.c ft_put_unsigned_int_fd.c \
ft_putnbr_fd_n.c ft_putstr_fd_n.c ft_translate_hex.c ft_uintptr_to_hex.c \
ft_wrap_c.c ft_wrap_d_i.c ft_wrap_p.c ft_wrap_s.c ft_wrap_u.c ft_wrap_x.c \
ft_putchar_fd.c ft_strlen.c

OBJS =	$(SRCS:.c=.o)

CFLAGS =	-Wall -Wextra -Werror

CC =	gcc

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re %.o
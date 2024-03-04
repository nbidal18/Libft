CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
FOLDER = utils
MANDATORY_SOURCES = $(FOLDER)/ft_printf.c $(FOLDER)/ft_putchar.c $(FOLDER)/ft_puthex_up.c $(FOLDER)/ft_puthex.c $(FOLDER)/ft_putnbr_u.c $(FOLDER)/ft_putnbr.c $(FOLDER)/ft_putptr.c $(FOLDER)/ft_putstr.c $(FOLDER)/ft_specifiers.c
MANDATORY_OBJECTS = $(MANDATORY_SOURCES:.c=.o)
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(MANDATORY_OBJECTS)
	ar rc $(NAME) $(MANDATORY_OBJECTS)
	ranlib $(NAME)

%.o:%.c ${HEADER}
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(MANDATORY_OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
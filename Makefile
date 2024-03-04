CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
LIBFT_HEADER = libft.h
PRINTF_DIR = ft_printf

LIBFT_SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
#..._SOURCES = ...c ...c

SOURCES = $(LIBFT_SOURCES) #$(..._SOURCES) $(..._SOURCES)
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

#$(MAKE) -C $(PRINTF_DIR) is to run the other makefile
$(NAME): $(OBJECTS)
	$(MAKE) -C $(PRINTF_DIR)
	ar rc $(NAME) $(OBJECTS) $(PRINTF_DIR)/*.o
	ranlib $(NAME)

%.o: %.c ${LIBFT_HEADER}
	$(CC) $(FLAGS) -c $< -o $@
	@echo "compiled"

clean:
	rm -f $(OBJECTS)
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

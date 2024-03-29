CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
MANDATORY_SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
BONUS_SOURCES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
#takes the list of MANDATORY_SOURCES and replaces .c with .o to make the object files
MANDATORY_OBJECTS = $(MANDATORY_SOURCES:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)
HEADER = libft.h

all: $(NAME)

#ranlib adds an index to the .a, done automatically by ar on modern system but not always on older ones
$(NAME): $(MANDATORY_OBJECTS)
	ar rc $(NAME) $(MANDATORY_OBJECTS)
	ranlib $(NAME)

bonus: $(BONUS_OBJECTS) $(MANDATORY_OBJECTS)
	ar rc $(NAME) $(BONUS_OBJECTS) $(MANDATORY_OBJECTS)

#-c avoids the makefile relinking
#$< is an automatic variable that represents the first prerequesite of the rule (.c)
#-o $@ specifies the output with an automatic variable representing the target of the rule (.o)
%.o: %.c ${HEADER}
	$(CC) $(FLAGS) -c $< -o $@
	@echo "compiled"

clean:
#delete them because we only need them to create the library
	rm -f $(MANDATORY_OBJECTS) $(BONUS_OBJECTS)

fclean: clean
#cleans the library archive which is the collection of .o files
	rm -f $(NAME)

#just good practice to check for inconsistencies
re: fclean all

#tells Make that these are not files and will always execute they're associated commands
.PHONY: all clean fclean re bonus

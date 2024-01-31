CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
MANDATORY_SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c
#takes the list of MANDATORY_SOURCES and replaces .c with .o to make the object files
MANDATORY_OBJECTS = $(MANDATORY_SOURCES:.c=.o)
#BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)
HEADER = libft.h

#da creare gli object file...

all: $(NAME)

#ranlib adds an index to the .a, done automatically by ar on modern system but not always on older ones
#eventually will become $(NAME): $(MANDATORY_OBJECTS) $(BONUS_OBJECTS)
#and ar rc $(NAME) $(MANDATORY_OBJECTS) $(BONUS_OBJECTS)
$(NAME): $(MANDATORY_OBJECTS)
	ar rc $(NAME) $(MANDATORY_OBJECTS)
	ranlib $(NAME)

#-c avoids the makefile relinking
#$< is an automatic variable that represents the first prerequesite of the rule (.c)
#-o $@ specifies the output with an automatic variable representing the target of the rule (.o)
%.o: %.c ${HEADER}
	$(CC) $(FLAGS) -c $< -o $@

clean:
#eventually will become #rm -f $(MANDATORY_OBJECTS) $(BONUS_OBJECTS)
#delete them because we only need them to create the library
	rm -f $(MANDATORY_OBJECTS)

fclean: clean
#cleans the library archive which is the collection of .o files
	rm -f $(NAME)

#just good practice to check for inconsistencies
re: fclean all

#tells Make that these are not files and will always execute they're associated commands
.PHONY: all clean fclean re

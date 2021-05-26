# make
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isprint.c ft_calloc.c ft_strjoin.c ft_itoa.c ft_putnbr_fd.c ft_lstclear.c ft_memccpy.c ft_lstadd_front.c ft_lstlast.c ft_isdigit.c ft_memset.c ft_isalnum.c ft_strmapi.c ft_strlcat.c ft_isascii.c ft_strlcpy.c ft_lstnew.c ft_strncmp.c ft_bzero.c ft_substr.c ft_strdup.c ft_lstdelone.c ft_strtrim.c ft_lstadd_back.c ft_tolower.c ft_putstr_fd.c ft_putendl_fd.c ft_strlen.c ft_lstmap.c ft_memcmp.c ft_atoi.c ft_memcpy.c ft_lstsize.c ft_lstiter.c ft_memchr.c ft_strchr.c ft_isalpha.c ft_putchar_fd.c ft_split.c ft_toupper.c ft_memmove.c 
OBJECTS = $(FILES:.c=.o)
RE = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
	
$(OBJECTS): $(FILES)
	$(CC) $(FLAGS) -c $(FILES)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

NAME = libft
FLAGS = -Wall -Werror -Wextra
FUNCTIONS = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c

all: $(NAME)

$(NAME):
	@gcc $(NAME) -c $(FUNCTIONS)
	@ar -rsv $(NAME).a $(OBJECTS)

clean:
	@rm -f $(OBJECTS)

fclear: clean
	@rm -f $(NAME).a

re: fclean all

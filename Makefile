NAME = libft.a
FLAGS = -Wall -Werror -Wextra
FUNCTIONS = ft_putnbr_fd.c \
			ft_putendl_fd.c \
			ft_putstr_fd.c \
			ft_putchar_fd.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_itoa.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_isalpha.c \
			ft_isalnum.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_split.c \
			ft_strchr.c

OBJECTS = $(FUNCTIONS:.c=.o)

BONUS = ft_lstmap_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstnew_bonus.c

OBJECTS_BONUS = $(BONUS:.c=.o);

all: $(NAME)

$(NAME):
	gcc -c $(FUNCTIONS)
	ar -rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME) $(OBJECTS_BONUS)

re: fclean all

bonus: $(NAME) $(OBJECTS_BONUS)
	ar rc $(NAME) $(OBJECTS) $(OBJECTS_BONUS)

.PHONY:	all clean fclean re bonus
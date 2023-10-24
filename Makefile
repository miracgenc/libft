
NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c \
		ft_atoi.c ft_strncmp.c ft_memset.c ft_bezero.c ft_strncmp.c ft_calloc.c ft_memcpy.c ft_memmove.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_strlcat.c ft_memcmp.c ft_strnstr.c ft_substr.c ft_strdup.c\
		ft_strjoin.c ft_strtrim.c \

OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
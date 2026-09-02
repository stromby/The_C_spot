NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = srcs/Part_I/ft_isalpha.c \
      srcs/Part_I/ft_isdigit.c \
      srcs/Part_I/ft_isascii.c \
	  srcs/Part_I/ft_isalnum.c \
	  srcs/Part_I/ft_isprint.c \
	  srcs/Part_I/ft_strlen.c \
	  srcs/Part_I/ft_memset.c \
	  srcs/Part_I/ft_bzero.c \
	  srcs/Part_I/ft_memcpy.c \
	  srcs/Part_I/ft_memmove.c \
 	  srcs/Part_I/ft_strlcpy.c \
	  srcs/Part_I/ft_strlcat.c \
	  srcs/Part_I/ft_toupper.c \
	  srcs/Part_I/ft_tolower.c \
      srcs/Part_I/ft_strcmp.c \
	  srcs/Part_II/ft_putchar_fd.c \
      srcs/Part_II/ft_putstr_fd.c \
      srcs/Part_II/ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
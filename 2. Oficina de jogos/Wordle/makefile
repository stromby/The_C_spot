NAME = wordle
CC = cc
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=32

SRCS = wordle.c get_next_line.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

run: all
	./$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all run clean fclean re

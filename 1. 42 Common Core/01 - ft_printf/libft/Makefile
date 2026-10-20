NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

SRC_DIR     = srcs
PART_I_DIR  = $(SRC_DIR)/Part_I
PART_II_DIR = $(SRC_DIR)/Part_II
BONUS_DIR   = $(SRC_DIR)/Bonus

SRC = $(PART_I_DIR)/ft_isalpha.c \
      $(PART_I_DIR)/ft_isdigit.c \
      $(PART_I_DIR)/ft_isascii.c \
      $(PART_I_DIR)/ft_isalnum.c \
      $(PART_I_DIR)/ft_isprint.c \
      $(PART_I_DIR)/ft_strlen.c \
      $(PART_I_DIR)/ft_memset.c \
      $(PART_I_DIR)/ft_bzero.c \
      $(PART_I_DIR)/ft_memcpy.c \
      $(PART_I_DIR)/ft_memmove.c \
      $(PART_I_DIR)/ft_strlcpy.c \
      $(PART_I_DIR)/ft_strlcat.c \
      $(PART_I_DIR)/ft_toupper.c \
      $(PART_I_DIR)/ft_tolower.c \
      $(PART_I_DIR)/ft_strchr.c \
      $(PART_I_DIR)/ft_strrchr.c \
      $(PART_I_DIR)/ft_strncmp.c \
      $(PART_I_DIR)/ft_memchr.c \
      $(PART_I_DIR)/ft_strnstr.c \
      $(PART_I_DIR)/ft_atoi.c \
      $(PART_I_DIR)/ft_calloc.c \
      $(PART_I_DIR)/ft_strdup.c \
      $(PART_II_DIR)/ft_substr.c \
      $(PART_II_DIR)/ft_strjoin.c \
      $(PART_II_DIR)/ft_strtrim.c \
      $(PART_II_DIR)/ft_split.c \
      $(PART_II_DIR)/ft_itoa.c \
      $(PART_II_DIR)/ft_strmapi.c \
      $(PART_II_DIR)/ft_striteri.c \
      $(PART_II_DIR)/ft_putchar_fd.c \
      $(PART_II_DIR)/ft_putstr_fd.c \
      $(PART_II_DIR)/ft_putendl_fd.c \
      $(PART_II_DIR)/ft_putnbr_fd.c

BONUS_SRC = $(BONUS_DIR)/ft_lstnew_bonus.c \
            $(BONUS_DIR)/ft_lstadd_front_bonus.c \
            $(BONUS_DIR)/ft_lstsize_bonus.c \
            $(BONUS_DIR)/ft_lstlast_bonus.c \
            $(BONUS_DIR)/ft_lstadd_back_bonus.c \
            $(BONUS_DIR)/ft_lstdelone_bonus.c \
            $(BONUS_DIR)/ft_lstclear_bonus.c \
            $(BONUS_DIR)/ft_lstiter_bonus.c \
            $(BONUS_DIR)/ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

BONUS_DONE = .bonus_done

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@touch $(BONUS_DONE)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)
	rm -f $(BONUS_DONE)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

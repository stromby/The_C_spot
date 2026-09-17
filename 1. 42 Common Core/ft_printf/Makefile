# Nome da biblioteca final exigida pelo subject
NAME        = libftprintf.a

# Compilador e Flags
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I includes -I libft/includes

# Caminhos das pastas e da Libft
LIBFT_DIR   = libft
LIBFT       = $(LIBFT_DIR)/libft.a

# Ficheiros de Código Fonte do ft_printf
SRC_DIR     = srcs
SRC         = $(SRC_DIR)/ft_printf.c \
              $(SRC_DIR)/ft_print_utils.c \
              $(SRC_DIR)/ft_print_nbr.c \
              $(SRC_DIR)/ft_print_hex.c

# Transformação dos ficheiros .c em .o
OBJ         = $(SRC:.c=.o)

# Comandos Úteis
RM          = rm -f
AR          = ar rcs

# Regra Principal (Compila tudo)
all: $(NAME)

# Como criar a libftprintf.a
$(NAME): $(LIBFT) $(OBJ)
	@# 1. Copia a libft.a para a raiz com o novo nome obrigatório
	cp $(LIBFT) $(NAME)
	@# 2. Adiciona os objetos do printf dentro desta nova biblioteca
	$(AR) $(NAME) $(OBJ)
	@echo "✨ Biblioteca $(NAME) criada com sucesso!"

# Regra para compilar a Libft chamando o Makefile dela
$(LIBFT):
	@make -C $(LIBFT_DIR)

# Como compilar cada ficheiro .c do printf individualmente em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpa os ficheiros objetos (.o) do printf e da libft
clean:
	$(RM) $(OBJ)
	@make -C $(LIBFT_DIR) clean
	@echo "🧹 Ficheiros objetos (.o) limpos."

# Limpa tudo: objetos e as bibliotecas finais (.a)
fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@echo "🗑️  Tudo o que foi compilado foi removido."

# Força a recompilação do zero
re: fclean all

# Proteção contra ficheiros com nomes iguais às regras
.PHONY: all clean fclean re

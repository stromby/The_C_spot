# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/25 12:00:00 by morango           #+#    #+#              #
#    Updated: 2026/10/06 19:38:38 by hmoura           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -Iincludes -I$(LIBFT_DIR)/includes -I.

# Caminhos das Bibliotecas
LIBFT_DIR   = ./libft
LIBFT       = $(LIBFT_DIR)/libft.a

# Pastas do Projeto
SRC_DIR     = srcs
OBJ_DIR     = obj

# Ficheiros de Código do teu Projeto (Tabs corrigidos para a Norma)
SRCS        = $(SRC_DIR)/push_swap.c \
              $(SRC_DIR)/stack_utils.c \
			  $(SRC_DIR)/stack_utils_2.c \
              $(SRC_DIR)/error_utils.c \
              $(SRC_DIR)/parsing_utils.c \
              $(SRC_DIR)/sort_smalls.c \
              $(SRC_DIR)/sort_bigs.c \
              $(SRC_DIR)/sort_bigs_utils.c \
			  $(SRC_DIR)/sort_bigs_targets.c \
              $(SRC_DIR)/moves/swap.c \
              $(SRC_DIR)/moves/push.c \
              $(SRC_DIR)/moves/rotate.c \
              $(SRC_DIR)/moves/rev_rotate.c

# Converte os caminhos de .c em caminhos de .o dentro da pasta obj/
OBJS        = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Cores para o Terminal
GREEN       = \033[0;32m
RESET       = \033[0m

# Regra Principal
all: $(NAME)

# Compila a Libft primeiro (Regra própria de dependência)
$(LIBFT):
	@make -C $(LIBFT_DIR)

# Compila o Executável Final (Adicionada a dependência explícita da $(LIBFT))
$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)
	@echo "$(GREEN)-> Executável push_swap criado com sucesso!$(RESET)"

# Regra para compilar ficheiros .c para dentro da pasta obj/ e subpastas
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

# Limpa a pasta de objetos (.o) do teu projeto e da libft
clean:
	@rm -rf $(OBJ_DIR)
	@make clean -C $(LIBFT_DIR)
	@echo "Ficheiros objeto (.o) removidos."

# Limpa os objetos e os executáveis/arquivos (.a)
fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)
	@echo "Executável push_swap e libft.a removidos."

# Recompila tudo do zero
re: fclean all

.PHONY: all clean fclean re


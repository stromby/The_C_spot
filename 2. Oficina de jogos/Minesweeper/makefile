# Nome do compilador
CC = gcc

# Flags de compilação
CFLAGS = -Wall -Wextra -std=c99

# Nome do executável final
TARGET = minesweeper

# Lista explícita dos objetos
OBJS = main.o minesweeper.o

# Ficheiro de cabeçalho
DEPS = minesweeper.h

# Regra principal
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regra para compilar cada .c em .o
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

# Apaga apenas os ficheiros objeto (.o)
clean:
	rm -f $(OBJS)

# Apaga os objetos E o executável final (Full Clean)
fclean: clean
	rm -f $(TARGET)

# Limpa absolutamente tudo e volta a compilar do zero
re: fclean all

# Compila (se necessário) e executa o jogo
run: all
	./$(TARGET)

# Proteção para as regras que não geram ficheiros físicos
.PHONY: all clean fclean re run



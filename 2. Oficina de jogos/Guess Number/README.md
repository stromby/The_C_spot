# 🎯 Guess the Number (1-9)

Um mini-jogo interativo em modo texto desenvolvido em **C puro** como projeto de treino para consolidar conceitos de manipulação de fluxos e prevenção de comportamentos inesperados na consola.

## 🛠️ Objetivos Técnicos do Projeto
Este projeto foi desenhado especificamente para testar e aplicar:
- **Gestão de Buffers (`stdin`):** Implementação de macros robustas para limpar resíduos do teclado (`CLEAN_BUFFER`) utilizando `getchar()`, anulando quebras de linha pendentes e strings agressivas do tipo `2asd`.
- **Validação com Tabela ASCII:** Filtro estrito de input de carateres (`char`) transformando caracteres numéricos em inteiros reais através de aritmética de ponteiros/carateres (`c - '0'`).
- **Sequências de Escape ANSI:** Limpeza dinâmica do ecrã do terminal sem dependências do sistema operativo (usando códigos puros de escape do tipo `\033[H\033[J`).
- **Suporte UTF-8 Internacional:** Configuração de locale para renderização correta de emojis na consola.

## 🎮 Como Jogar
O computador escolhe um número pseudoaleatório entre 1 e 9. Tens **5 vidas**. A cada erro, o ecrã atualiza os teus corações e diz-te se o número secreto é maior ou menor.

### Como Compilar e Executar (Linux/macOS)
```bash
gcc -Wall -Werror -Wextra guess_the_number.c -o guess_the_number
./guess_the_number
```

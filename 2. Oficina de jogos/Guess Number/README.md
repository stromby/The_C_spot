# 🎯 Guess the Number (1-9)

Um mini-jogo interativo desenvolvido em **C puro** para o terminal (CLI), focado na blindagem contra inputs corrompidos e controlo rigoroso de streams de dados. Este projeto serviu de laboratório prático para consolidar conceitos fundamentais de buffers antes de avançar para algoritmos mais complexos.

## 🕹️ Visual do Jogo (CLI Preview)

### Menu Inicial
```text
┌──────────────────────────────────────────┐
│      🎯  GUESS THE NUMBER (1-9)  🎯      │
├──────────────────────────────────────────┤
│  I'm thinking of a number between 1-9.   │
│  You have 5 attempts to get it right!    │
└──────────────────────────────────────────┘

Lives:  [❤️ ] [❤️ ] [❤️ ] [❤️ ] [❤️ ] (5 left)
───────────────────────────────────────────
👉 Enter your guess:
```

### Tentativa Incorreta e Dica Dinâmica
```text
❌ Wrong number! The secret is HIGHER.

Lives:  [❤️ ] [❤️ ] [❤️ ] [❤️ ] [ ] (4 left)
───────────────────────────────────────────
👉 Enter your next guess:
```

### Fim de Jogo (Vitória / Derrota)
```text
┌─────────────────────────────────────────┐
│      🎉  CONGRATULATIONS! YOU WIN! 🎉   │
├─────────────────────────────────────────┤
│  💥 You nailed it! The number was 7.    │
│  🏆 You won with 4 lives remaining!     │
└─────────────────────────────────────────┘
```

## 🛠️ Objetivos Técnicos e Implementação

- **Resolução de "Spam" por Input Múltiplo:** Utilização de uma macro dedicada `CLEAN_BUFFER()` que esvazia completamente a stream do teclado (`stdin`) através de um ciclo iterativo de `getchar()` até encontrar `\n` ou `EOF`. Isto impede que inputs mistos e longos (ex: `2asd` ou frases completas) quebrem os `scanf` das jogadas seguintes.
- **Validação Modular Baseada na Tabela ASCII:** Filtro estrito de carateres na função `is_valid`. A validação é feita através de limites de caracteres aritméticos (`c < '1' || c > '9'`), convertendo o input em inteiros puros apenas no momento final através de aritmética de caracteres (`c - '0'`).
- **Sequências de Escape ANSI Universais:** Limpeza e posicionamento do ecrã controlados diretamente pela macro `CLEAR_SCREEN()`, que envia os bytes nativos `\033[H\033[J` para o terminal. Evita a dependência de chamadas pesadas ao sistema operativo como `system("clear")` ou `system("cls")`.
- **Portabilidade Unicode:** Suporte multiplataforma nativo para renderização de caracteres UTF-8 e emoticons complexos em terminais modernos através da configuração de locales dinâmicos.

## 🚀 Como Compilar e Correr

Certifica-te de que o teu compilador suporta as flags estritas padrão da **42**:

```bash
gcc -Wall -Werror -Wextra guess_the_number.c -o guess_the_number
./guess_the_number
```

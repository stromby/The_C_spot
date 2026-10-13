# 🟩 Wordle em Modo Texto (Multilíngue) 🟨

Uma recriação modular, robusta e fiel do famoso jogo Wordle desenvolvida inteiramente em **C puro**. Este projeto destaca-se pela integração autónoma da minha função `get_next_line` (do Common Core da 42) para realizar o *parsing* dinâmico de dicionários externos, e pela implementação de um algoritmo de validação de dupla passagem para garantir a precisão milimétrica na atribuição de cores.

## 🕹️ Visual do Jogo (CLI Preview)

### Estado Intermédio do Jogo (Grelha Ativa)
```text
===== 🟩 WORDLE 🟨 =====

==================================

       C   O   D   E   S
       C   L   I   P   S
       _   _   _   _   _
       _   _   _   _   _
       _   _   _   _   _
       _   _   _   _   _

==================================
💡 Legend:
    🟩 Correct position
    🟨 Wrong position (exists in word)
    ⬛ Not in word
==================================

👉 Enter a 5-letter word: _
```

### Telas de Conclusão de Estado (Vitória e Derrota)
```text
🥳 CONGRATULATIONS! You solved the Wordle in 4/6 attempts!
```
```text
😭 GAME OVER! You've run out of attempts.
💡 The secret word was: T I G E R
```

## 🛠️ Objetivos Técnicos e Implementação

- **Integração de Ferramentas do Core (`get_next_line`):** Utilização da minha própria função utilitária de leitura para carregar dicionários de texto dinamicamente (`words_en.txt` e `words_pt.txt`). O programa processa e limpa os delimitadores invisíveis (`\n`) de forma universal, lidando com ficheiros de texto independentemente de como foram formatados.
- **Algoritmo de Dupla Passagem para Letras Repetidas:** Para evitar falsos positivos comuns em lógicas sequenciais simples, a função `update_grids` avalia o palpite do jogador em duas etapas estritas. A primeira passagem bloqueia e atribui prioridade absoluta aos acertos exatos (**Verdes**). A segunda passagem distribui os estados de posição errada (**Amarelos**) controlando quais letras da palavra secreta já foram efetivamente "consumidas", replicando com exatidão as regras oficiais do Wordle.
- **Isolamento de Memória Controlada (Stack vs Heap):** Gestão rigorosa de ponteiros de acordo com os padrões de segurança da 42. O tabuleiro de tentativas (`char grid_guesses[6][6]`) e os estados numéricos (`int grid_status[6][5]`) são mantidos de forma eficiente no *Stack*, enquanto as strings voláteis lidas do dicionário são alocadas no *Heap* e integralmente libertadas (`free`) para garantir **zero memory leaks**.
- **Sanitização de Input e Normalização ASCII:** Filtro estrito (`is_alpha_word`) que rejeita instantaneamente strings contendo números ou caracteres especiais. O programa realiza aritmética de ponteiros direta na tabela ASCII (`char - 32`) para converter entradas em minúsculas para maiúsculas em tempo de execução, blindando o motor do jogo contra erros do utilizador.

## 🚀 Como Compilar e Correr (Automação com Makefile)

O projeto inclui um `Makefile` modular que lida com a compilação incremental e define macros de compilação em conformidade com as flags exigidas no Common Core (`-Wall -Wextra -Werror`).

Para compilar o código e **iniciar o jogo imediatamente**, executa na consola:
```bash
make run
```

### Comandos Adicionais do Makefile:
- `make` — Compila apenas os ficheiros fonte (`main.c` e `get_next_line.c`) e gera os objetos intermédios `.o` interligando o executável final `wordle`.
- `make clean` — Limpa o repositório removendo todos os ficheiros objeto intermédios `.o`.
- `make fclean` — Executa uma limpeza total, eliminando os ficheiros `.o` e o executável final `wordle`.
- `make re` — Força a reconstrução completa do projeto do zero (`fclean` + `all`).

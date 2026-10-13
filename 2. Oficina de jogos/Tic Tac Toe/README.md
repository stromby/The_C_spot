# ❌ Jogo do Galo (Tic-Tac-Toe) ⭕

Uma recriação modular e robusta do clássico Jogo do Galo desenvolvida em **C puro**. O projeto foca-se na linearização de matrizes e no alinhamento de memória para suportar elementos gráficos expandidos (UTF-8 Multi-byte) sem corromper o alinhamento da interface na consola.

## 🕹️ Visual do Jogo (CLI Preview)

### Estado Intermédio do Tabuleiro
```text
┌─────────────────────────────────────────┐
│             ❌  JOGO DO GALO  ⭕        │
└─────────────────────────────────────────┘

             ┌────┬────┬────┐
             │ ❌ │ 2  │ ⭕ │
             ├────┼────┼────┤
             │ 4  │ ❌ │ 6  │
             ├────┼────┼────┤
             │ 7  │ 8  │ 9  │
             └────┴────┴────┘

	👉 Turn: Player 1 (⭕)
───────────────────────────────────────────
Select a position (1-9):
```

### Telas de Conclusão de Estado
```text
┌─────────────────────────────────────────┐
│      🎉  CONGRATULATIONS! WINNER! 🎉    │
├─────────────────────────────────────────┤
│  🏆 Player 2 (❌) dominated the board!  │
│  ✨ Spectacular victory!                │
└─────────────────────────────────────────┘
```

## 🛠️ Objetivos Técnicos e Implementação

- **Linearização de Matrizes (1-Based Indexing):** Utilização de um array unidimensional de 10 posições (`char board[10]`) com um elemento de *padding* no índice `0`. Esta técnica elimina a necessidade de aritmética de desfasamento (`index - 1`) em todo o código, permitindo que a entrada direta do jogador corresponda exatamente à célula de memória pretendida.
- **Compensação Dinâmica de Bytes (Double-Width Characters):** Emojis Unicode complexos (como ❌ e ⭕) ocupam mais bytes de memória e espaço de renderização do que caracteres normais da tabela ASCII. A função de tradução `trans_char` devolve ponteiros imutáveis (`const char*`) contendo espaços embutidos à direita dos números normais (`"1 "`), forçando todas as células a terem o mesmo tamanho exato no terminal.
- **Validação Cruzada de Dupla Condição:** A função `is_valid` atua de forma recursiva no buffer para garantir que a jogada cumpre dois requisitos em simultâneo: pertencer ao intervalo numérico válido da tabela ASCII (`'1'` a `'9'`) e não colidir com posições previamente marcadas no array de estado.
- **Algoritmo de Fim de Jogo Imutável:** Varredura imediata das 8 combinações de vitória (linhas, colunas e diagonais) e ciclo complementar de verificação de esvaziamento de dados para determinação matemática de empates (*Velha*).

## 🚀 Como Compilar e Correr

Compilação limpa sem avisos utilizando o compilador GCC:

```bash
gcc -Wall -Werror -Wextra tic_tac_toe.c -o tic_tac_toe
./tic_tac_toe
```

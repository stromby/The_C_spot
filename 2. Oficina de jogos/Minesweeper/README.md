# 💣 Campo Minado (Minesweeper) 🚩

Uma recriação modular e estruturada do clássico Campo Minado desenvolvida em **C puro**. O projeto foca-se em algoritmos de recursividade para propagação de revelação de células vazias e na renderização controlada por caracteres Unicode na consola.

## 🕹️ Visual do Jogo (CLI Preview)

### Estado Intermédio do Tabuleiro
```text
====================================
            MINESWEEPER
====================================
 Mines: 10  |  Flags: 2  |  Time: 45
====================================

    0    1    2    3    4    5    6    7    8
  ┌────┬────┬────┬────┬────┬────┬────┬────┬────┐
0 │ 🚩 │  1 │    │    │    │  1 │ ■  │ ■  │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
1 │  1 │  1 │    │    │    │  1 │ 🚩 │ ■  │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
2 │    │    │    │    │    │  1 │  1 │  1 │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
3 │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
4 │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
5 │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
6 │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
7 │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
8 │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │ ■  │
  └────┴────┴────┴────┴────┴────┴────┴────┴────┘
[Commands]: R X Y (Reveal) | F X Y (Flag)
Enter command:
```

### Telas de Conclusão de Estado (Game Over)
```text
====================================
            GAME OVER
====================================
 You hit a mine!
====================================

    0    1    2    3    4    5    6    7    8
  ┌────┬────┬────┬────┬────┬────┬────┬────┬────┐
0 │ 🚩 │  1 │    │    │    │  1 │ 💣 │ ■  │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
1 │  1 │  1 │    │    │    │  1 │ ❌ │ ■  │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
2 │    │    │    │    │    │  1 │  1 │  1 │ ■  │
  ├────┼────┼────┼────┼────┼────┼────┼────┼────┤
3 │ ■  │ ■  │ ■  │ 💥 │ ■  │ ■  │ ■  │ ■  │ ■  │
  └────┴────┴────┴────┴────┴────┴────┴────┴────┘
```

## 🛠️ Objetivos Técnicos e Implementação

- **Algoritmo de Inundação Recursiva (*Flood Fill*):** Implementação da função `reveal_neighbours` que atua recursivamente sobre a matriz adjacente sempre que uma célula com zero minas vizinhas (`neighbours == 0`) é revelada. A recursão propaga-se de forma controlada, contornando células já abertas para evitar ciclos infinitos de estouro de pilha (*stack overflow*).
- **Varredura Adjacente Limitada por Fronteiras:** A função `get_neighbours` realiza uma análise de vizinhança de 8 vias (matriz relativa \(3\times3\) com desvios entre `-1` e `1`). A lógica inclui validações matemáticas rígidas para garantir que os índices calculados residem estritamente dentro do intervalo de memória alocado para a matriz `[0..8]`, eliminando riscos de falhas de segmentação (*Segmentation Fault*).
- **Condição Matemática Descendente de Vitória:** O ciclo principal do jogo monitoriza o estado através da invariante `revealed != 71`. Como o tabuleiro possui 81 células no total e exatamente 10 minas plantadas aleatoriamente, a vitória é determinada pelo complemento exato de posições seguras descobertas, dispensando a necessidade de validação individual das bandeiras posicionadas.
- **Controlo Temporal Estável:** Integração da biblioteca `<time.h>` e da função `difftime` convertida explicitamente para inteiro (`(int)`). O estado temporal é capturado no início de cada iteração e injetado diretamente na função de renderização `print_board`, permitindo que o cronómetro acompanhe dinamicamente o fluxo do jogo a cada interação sem a necessidade de *multithreading*.
- **Compatibilidade Transplataforma de Codificação (UTF-8):** Utilização de diretivas de pré-processador condicional (`#ifdef _WIN32`) para ajustar a página de código da consola do Windows via `SetConsoleOutputCP(65001)` ou configurar o *locale* em sistemas Unix/Linux (`setlocale`). Isto garante o alinhamento de memória visual ao processar os glifos gráficos extendidos (💥, 💣, 🚩, ❌).

## 🚀 Como Compilar e Correr

Compilação limpa sem avisos utilizando o compilador GCC:

```bash
gcc -Wall -Werror -Wextra main.c minesweeper.c -o minesweeper
./minesweeper
```
# ❌ Jogo do Galo (Tic-Tac-Toe) ⭕

Uma recriação modular do clássico Jogo do Galo em **C**, focada em design de interfaces CLI limpas e otimização de arrays lineares para simulação tridimensional.

## 🛠️ Objetivos Técnicos do Projeto
- **Modularização de Código:** Divisão total das responsabilidades do programa em funções independentes e puras (`print_board`, `is_valid`, `check_game_over`), garantindo que não existem variáveis globais.
- **Estruturas de Dados Dinâmicas (1-Based Indexing):** Alinhamento inteligente do array `char board[10]` com o índice `0` em modo *padding*, permitindo mapear os inputs diretos do utilizador (1 a 9) sem a necessidade de correções matemáticas (`index - 1`) na lógica de verificação.
- **Design UTF-8 Avançado (Box-Drawing):** Construção da interface gráfica em modo texto através de carateres contínuos (`┌`, `─`, `┼`, `┐`) e tratamento de strings constantes (`const char*`) para compensação da largura de bytes de emojis expansivos (2-width), eliminando o clássico problema de desalinhamento de tabelas na consola.
- **Prevenção de Race Conditions de Estado:** Controlo absoluto na alternância de turnos (`player = !player`) através de validações Booleanas, impossibilitando que a flag do vencedor seja corrompida se o jogo terminar na última jogada disponível.

## 🕹️ Visual do Jogo
```text
             ┌────┬────┬────┐
             │ ❌ │ 2  │ ⭕ │
             ├────┼────┼────┤
             │ 4  │ ❌ │ 6  │
             ├────┼────┼────┤
             │ 7  │ 8  │ 9  │
             └────┴────┴────┘
```

### Como Compilar e Executar (Linux/macOS)
```bash
gcc -Wall -Werror -Wextra tic_tac_toe.c -o tic_tac_toe
./tic_tac_toe
```

# Wall Game

A two-player, turn-based console board game on a 9x9 grid.

## Build and run

    make
    ./wall-game

## Commands

- `move e2` moves your pawn to a square (columns a-i, rows 1-9)
- `wall d3 H` places a horizontal (`H`) or vertical (`V`) wall (columns a-h, rows 1-8)

## Structure

| File | Contents |
|------|----------|
| `main.c` | Global state and the game loop |
| `board.c` | `print_board()` |
| `move.c` | `move()` |
| `wall.c` | `wall()` |
| `game.h` | Shared declarations |

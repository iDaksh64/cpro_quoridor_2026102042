CC = gcc
SRC = src/main.c src/board.c src/move.c src/wall.c

wall-game: $(SRC) src/game.h
	$(CC) -o $@ $(SRC)

clean:
	rm -f wall-game

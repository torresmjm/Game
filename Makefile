CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -Isrc/models -Isrc/controllers
LIBS = -lraylib -lm
SRC = $(wildcard src/*.c src/**/*.c)
OUT = game

all:
	$(CC) $(SRC) -o $(OUT) $(CFLAGS) $(LIBS)

run: all
	./$(OUT)

clean:
	rm -f $(OUT)